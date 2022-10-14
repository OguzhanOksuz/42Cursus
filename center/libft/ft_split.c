/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ooksuz <ooksuz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 15:29:56 by Ooksuz            #+#    #+#             */
/*   Updated: 2022/08/14 17:50:34 by Ooksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_wordcount(const char *s, char c)
{
	int i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if	(s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		len;
	int		i;

	i = 0;
	strs = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c)));
	if (!strs)
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)
				s++;
			strs[i++] = ft_substr(s - len, 0, len);
		}
		s++;
	}
	strs[i] = ft_strdup("");
	return (strs);
}
