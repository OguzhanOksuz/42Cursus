/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ooksuz <ooksuz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 10:44:01 by Ooksuz            #+#    #+#             */
/*   Updated: 2022/08/14 10:49:53 by Ooksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = (char *)haystack;
	i = 0;
	if (!ft_strlen(needle) || needle == str)
		return str;
	while (str[i] && i < len)
	{
		j = 0;
		while (str[i + j] == needle[j] || )
		{
			if (needle[j + 1] == 0 && i + j < len)
				return (str + i);
			j++;
		}
		i++;
	}
	return (0);
}
