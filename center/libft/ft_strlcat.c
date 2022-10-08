/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ooksuz <ooksuz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 10:22:44 by Ooksuz            #+#    #+#             */
/*   Updated: 2022/10/03 14:14:16 by ooksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dst, char *src, unsigned int size)
{
	unsigned int	len_src;
	unsigned int	len_dst;
	unsigned int	i;

	i = 0;
	len_dst = 0;
	len_src = 0;
	while (src[len_src])
		len_src++;
	while (dst[len_dst])
		len_dst++;
	if (size <= len_dst)
		return (size + len_src);
	while (src[i] && i < size - len_dst - 1)
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = 0;
	return (len_dst + len_src);
}
