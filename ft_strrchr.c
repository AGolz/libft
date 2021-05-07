/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfiora <cfiora@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 22:57:11 by cfiora            #+#    #+#             */
/*   Updated: 2021/05/06 22:58:42 by cfiora           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	const char	*ptr;

	ptr = str;
	while (*ptr)
		ptr++;
	if (ch == '\0')
		return ((char *)ptr);
	while (--ptr >= str)
	{
		if (ch == *ptr)
			return ((char *)ptr);
	}
	return (NULL);
}
