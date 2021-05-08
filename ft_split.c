/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfiora <cfiora@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 22:07:29 by cfiora            #+#    #+#             */
/*   Updated: 2021/05/09 01:53:32 by cfiora           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_get_strs(char const *s, const char ch)
{
	unsigned int	i;
	unsigned int	strs;

	if (!s[0])
		return (0);
	i = 0;
	strs = 0;
	while (s[i] && s[i] == ch)
		i++;
	while (s[i])
	{
		if (s[i] == ch)
		{
			strs++;
			while (s[i] && s[i] == ch)
				i++;
			continue ;
		}
		i++;
	}
	if (s[i - 1] != ch)
		strs++;
	return (strs);
}

static void	ft_get_nw_strs(char **nw_str, unsigned int *len_nw_str, \
								const char ch)
{
	unsigned int	i;

	*nw_str += *len_nw_str;
	*len_nw_str = 0;
	i = 0;
	while (**nw_str && **nw_str == ch)
		(*nw_str)++;
	while ((*nw_str)[i])
	{
		if ((*nw_str)[i] == ch)
			return ;
		(*len_nw_str)++;
		i++;
	}	
}

char	**ft_free_split(char **arr)
{
	unsigned int	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char			**arr;
	char			*nw_str;
	unsigned int	len_nw_str;
	unsigned int	strs;
	unsigned int	i;

	if (!s)
		return (NULL);
	strs = ft_get_strs(s, c);
	if (!(arr = (char **)malloc((strs + 1) * sizeof(char *))))
		return (NULL);
	arr[strs] = NULL;
	i = 0;
	nw_str = (char *)s;
	len_nw_str = 0;
	while (i < strs)
	{
		ft_get_nw_strs(&nw_str, &len_nw_str, c);
		arr[i] = (char *)malloc((len_nw_str + 1));
		if (!(arr[i] = (char *)malloc(len_nw_str + 1)))
			return (ft_free_split(arr));
		ft_strlcpy(arr[i], nw_str, len_nw_str + 1);
		i++;
	}
	arr[i] = NULL;
	return (arr);
}