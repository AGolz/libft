/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfiora <cfiora@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 17:58:24 by cfiora            #+#    #+#             */
/*   Updated: 2021/04/25 19:42:23 by cfiora           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *buf, int ch, size_t count)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)buf;
	while (count--)
		*(ptr++) = (unsigned char)ch;
	 return (buf);
}
