/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfiora <cfiora@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 16:11:47 by cfiora            #+#    #+#             */
/*   Updated: 2021/05/02 20:40:37 by cfiora           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STR_H
# define FT_STR_H
# include <string.h>
# include <stddef.h>

char	*ft_strchr(const char *str, int ch);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy (char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *str);

#endif 