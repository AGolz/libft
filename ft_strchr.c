/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfiora <cfiora@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 21:30:07 by cfiora            #+#    #+#             */
/*   Updated: 2021/05/11 02:14:12 by cfiora           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	while (*str && *str != (char)ch)
	{
		str++;
	}
	if ((char)ch == *str)
		return ((char *)str);
	return (NULL);
}
