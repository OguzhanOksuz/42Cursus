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

int	ft_word_count(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s == c)
		s++;
	while (*s)
	{
		while (*s != c && *s)
			s++;
		count++;
		while (*s == c)
			s++;
	}
	return (count);
}

int	ft_word_length(char const *s, char c, int wn)
{
	int	count;
	int	length;

	length = 0;
	count = 0;
	while (*s == c)
		s++;
	while (*s && count < wn)
	{
		while (*s != c && *s)
			s++;
		count++;
		while (*s == c)
			s++;
	}
	while (*s && *s != c)
	{
		length++;
		s++;
	}
	return (length);
}

char	**ft_split(char const *s, char c)
{
	char	**ar;
	int		i;
	int		j;
	int		word;

	i = 0;
	word = ft_word_count(s, c);
	ar = (char **)malloc(sizeof(char *) * (word + 1));
	if (!ar)
		return (0);
	while (i < word)
	{
		j = 0;
		ar[i] = (char *)malloc(sizeof(char) * ft_word_length(s, c, i));
		while (*s != c)
			ar[i][j++] = *s++;
		ar[i++][j] = 0;
		while (*s == c)
			s++;
	}
	ar[i] = 0;
	return (ar);
}
