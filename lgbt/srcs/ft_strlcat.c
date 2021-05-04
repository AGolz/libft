/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfiora <cfiora@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 18:52:32 by cfiora            #+#    #+#             */
/*   Updated: 2021/05/03 15:45:19 by cfiora           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t			res;
	size_t			i;

	res = 0;
	i = 0;
	while (dst[i] && i < size)
		i++;
	while (src[res] && (i + res + 1) < size)
	{
		dst[i + res] = src[res];
		res++;
	}
	if (i < size)
		dst[i + res] = '\0';
	return (i + ft_strlen(src));
}
