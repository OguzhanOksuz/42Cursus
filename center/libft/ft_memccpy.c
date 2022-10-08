/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ooksuz <ooksuz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 14:08:44 by Ooksuz            #+#    #+#             */
/*   Updated: 2022/10/03 14:13:23 by ooksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memccpy(void *dst, const void *src, int c, unsigned int n)
{
	unsigned char		*d;
	unsigned const char	*s;
	unsigned int		i;

	d = (unsigned char *)dst;
	s = (unsigned const char *)src;
	while (n-- > 0)
		*d++ = *s++;
	i = 0;
	while (i < n)
	{
		if (d[i] == c)
			return (dst + i);
		i++;
	}
	return (0);
}
