/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ooksuz <ooksuz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 18:04:33 by Ooksuz            #+#    #+#             */
/*   Updated: 2022/10/16 23:57:53 by Ooksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*rt;
	int		len;

	len = 0;
	if (!s)
		return (0);
	while (s[len])
		len++;
	rt = (char *)malloc(sizeof(char) * (len + 1));
	if (!rt)
		return (0);
	len = 0;
	while (*s)
	{
		rt[len] = (*f)(len, *s);
		s++;
		len++;
	}
	rt[len] = 0;
	return (rt);
}
