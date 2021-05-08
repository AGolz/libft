/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfiora <cfiora@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 22:57:11 by cfiora            #+#    #+#             */
/*   Updated: 2021/05/09 01:23:06 by cfiora           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	char			*ptr;
	unsigned int	i;

	ptr = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] == (char)ch)
			ptr = (char *)&str[i];
		i++;
	}
	if ((char)ch == str[i])
		return ((char *)&str[i]);
	return (ptr);
}
