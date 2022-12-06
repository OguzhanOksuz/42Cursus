/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ooksuz <ooksuz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 19:34:39 by Ooksuz            #+#    #+#             */
/*   Updated: 2022/12/06 20:15:43 by Ooksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strdup(const char *s1)
{
	char	*rt;
	int		i;

	i = 0;
	while (s1[i])
		i++;
	rt = (char *)malloc(sizeof(char) * (i + 1));
	if (!rt)
		return (0);
	i = 0;
	while (s1[i])
	{
		rt[i] = s1[i];
		i++;
	}
	rt[i] = 0;
	return (rt);
}

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	int		i;
	char	ch;

	ch = (char)c;
	i = 0;
	str = (char *)s;
	if (!s)
		return (0);
	while (str[i])
	{
		if (str[i] == ch)
			return (str + i);
		i++;
	}
	if (ch == 0)
		return (str + i);
	return (0);
}

char	*ft_nullchecker(char const *s1, char const *s2)
{
	if (!s1 && s2)
		return (ft_strdup(s2));
	else if (!s2 && s1)
		return (ft_strdup(s1));
	return (0);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	len1;
	size_t	len2;
	char	*rt;

	i = 0;
	if (!s1 || !s2)
		return (ft_nullchecker(s1, s2));
	rt = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!rt)
		return (0);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	while (i < len1)
	{
		rt[i] = s1[i];
		i++;
	}
	while (i < len2 + len1)
	{
		rt[i] = s2[i - len1];
		i++;
	}
	rt[len1 + len2] = 0;
	return (rt);
}

size_t	ft_strlen(const char *s)
{
	unsigned int	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}
