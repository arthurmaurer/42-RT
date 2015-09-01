/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaurer <amaurer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 15:57:42 by amaurer           #+#    #+#             */
/*   Updated: 2015/02/10 08:55:29 by amaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	char			*s;
	unsigned int	i;

	i = 0;
	s = (char*)src;
	while (i < n)
	{
		if (s[i] == (char)c)
			return (s + i);
		i++;
	}
	return (NULL);
}
