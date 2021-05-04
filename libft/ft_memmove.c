/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfiora <cfiora@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 15:55:43 by cfiora            #+#    #+#             */
/*   Updated: 2021/05/04 03:34:12 by cfiora           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*s1;
	const unsigned char	*s2;
	size_t				i;

	s1 = (unsigned char *)dst;
	s2 = (const unsigned char *)src;
	i = 0;
	if (!src && !dst)
		return (NULL);
	while (i < n)
	{
		if (dst > src)
			s1[n - i - 1] = s2[n - i - 1];
		else
			s1[i] = s2[i];
		i++;
	}
	return (dst);
}
