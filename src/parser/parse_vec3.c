/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaurer <amaurer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/07 22:33:07 by amaurer           #+#    #+#             */
/*   Updated: 2015/10/05 18:26:09 by amaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "vec3.h"
#include "util.h"

void		parse_vec3(char **tokens, t_vec3 *vec)
{
	vec3_set(vec, 0, 0, 0);

	if (tokens[0] != NULL)
	{
		vec->x = atof(tokens[0]);

		if (tokens[1] != NULL)
		{
			vec->y = atof(tokens[1]);

			if (tokens[2] != NULL)
				vec->z = atof(tokens[2]);
		}
	}
}
