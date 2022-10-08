/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ooksuz <ooksuz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 10:32:10 by Ooksuz            #+#    #+#             */
/*   Updated: 2022/10/05 20:45:11 by ooksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	int		i;
	char	ch;

	ch = (char)c;
	i = 0;
	str = (char *)s;
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
