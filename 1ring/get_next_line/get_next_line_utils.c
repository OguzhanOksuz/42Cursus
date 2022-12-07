/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ooksuz <ooksuz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 19:34:39 by Ooksuz            #+#    #+#             */
/*   Updated: 2022/12/07 22:55:49 by Ooksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_calloc(size_t count, size_t byte)
{
	char	*rt;
	size_t	i;

	i = 0;
	rt = malloc(count * byte);
	if (!rt)
		return (NULL);
	while (i < count)
		rt[i++] = 0;
	return (rt);
}

int	ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return (1);
		s++;
	}
	return (0);
}

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*rt;

	i = 0;
	j = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	rt = malloc(sizeof(char) * (len + 1));
	if (!rt || !s1 || !s2)
		return (0);
	while (s1[i] != 0)
	{
		rt[i] = s1[i];
		i++;
	}
	while (s2[j] != 0)
		rt[i++] = s2[j++];
	rt[len] = 0;
	free(s1);
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
