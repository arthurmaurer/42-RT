/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaurer <amaurer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/07 22:33:07 by amaurer           #+#    #+#             */
/*   Updated: 2015/10/05 18:26:09 by amaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>
#include "object.h"
#include "parser.h"
#include "util.h"

void		*parse_sphere(const parsing_sect_t *section, t_scene *scene)
{
	t_sphere	*sphere;
	t_object	*object;
	t_vec3		position;
	t_material	*material;
	float		radius;
	
	vec3_set(&position, 0, 0, 0);
	
	if (section->option_count > 0)
		parse_vec3(section->options[0] + 1, &position);

	radius = 0.f;

	if (section->option_count > 1)
		radius = atof(section->options[1][1]);

	material = NULL;

	if (section->option_count > 2)
		material = get_material(scene, section->options[2][1]);

	if (material == NULL)
		die("Unknown material.");

	sphere = create_sphere(&position, radius, material);
	object = create_object(section->name, SPHERE, sphere);
	lst_push_back(scene->objects, object);

	return (sphere);
}
