/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mem.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfiora <cfiora@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 15:24:08 by cfiora            #+#    #+#             */
/*   Updated: 2021/05/02 16:18:11 by cfiora           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MEM_H
# define FT_MEM_H
# include <string.h>

int		ft_memcmp (const void *arr1, const void *arr2, size_t n);
void	ft_bzero(void *buf, size_t count);
void	*ft_memchr(const void *arr, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
void	*ft_memset(void *buf, int ch, size_t count);

#endif 