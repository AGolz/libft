/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfiora <cfiora@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 21:30:07 by cfiora            #+#    #+#             */
/*   Updated: 2021/05/06 20:08:42 by cfiora           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	char	*ptr;

	ptr = (char *)str;
	while (*ptr != ch)
	{
		if (*ptr == '\0')
		{
			return (NULL);
		}
		ptr++;
	}
	return (ptr);
}
