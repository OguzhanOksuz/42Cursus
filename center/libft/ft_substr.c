/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ooksuz <ooksuz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 00:12:55 by Ooksuz            #+#    #+#             */
/*   Updated: 2022/08/14 01:25:49 by Ooksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*rtn;
	size_t	i;

	if (!s)
		return (NULL);
	if ((size_t)start > ft_strlen(s))
		return (NULL);
	rtn = malloc(sizeof(char) * (len + 1));
	i = 0;
	if (!rtn)
		return (0);
	while (i < len)
	{
		rtn[i] = *(s + start + i);
		i++;
	}
	rtn[i] = '\0';
	return (rtn);
}
