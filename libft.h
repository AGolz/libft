/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfiora <cfiora@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 17:46:15 by cfiora            #+#    #+#             */
/*   Updated: 2021/05/11 11:34:54 by cfiora           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include "addfunc.h"
# include "bonus.h"

int		ft_atoi(const char *str);

int		ft_memcmp (const void *arr1, const void *arr2, size_t n);
void	ft_bzero(void *buf, size_t count);
void	*ft_memchr(const void *arr, int c, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
void	*ft_memset(void *buf, int ch, size_t count);

int		ft_strncmp(const char *str_1, const char *str_2, size_t n);
char	*ft_strchr(const char *str, int ch);
char	*ft_strrchr(const char *str, int ch);
char	*ft_strnstr(const char *big, const char *little, size_t len);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy (char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *str);

int		ft_isalpha(int ch);
int		ft_isdigit(int ch);
int		ft_isalnum(int ch);
int		ft_isascii(int ch);
int		ft_isprint(int ch);
int		ft_toupper(int ch);
int		ft_tolower(int ch);

void	*ft_calloc(size_t number, size_t size);
char	*ft_strdup(const char *str);

#endif