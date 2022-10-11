/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ooksuz <ooksuz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 15:13:49 by Ooksuz            #+#    #+#             */
/*   Updated: 2022/10/03 14:15:51 by ooksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isinset(const char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_trimmedlen(const char *s1, char const *set)
{
	size_t	i;
	size_t	len;

	len = 0;
	i = 0;
	while (s1[i] && !ft_isinset(s1[i], set))
	{
		if (!ft_isinset(s1[i], set))
			len++;
		i++;
	}
	return (len + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str;

	j = 0;
	i = 0;
	str = malloc(sizeof(char) * ft_trimmedlen(s1, set));
	if (!str)
		return (0);
	while (s1[i])
	{
		if (!ft_isinset(s1[i], set))
			str[j++] = s1[i];
		i++;
	}
	str[i] = 0;
	return (str);
}
