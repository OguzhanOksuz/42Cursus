/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ooksuz <ooksuz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 14:28:30 by Ooksuz            #+#    #+#             */
/*   Updated: 2022/10/05 15:30:12 by ooksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	int	*ptr;

	if (nmemb == 0 || size == 0)
	{
		nmemb = 0;
		size = 0;
	}
	ptr = malloc (nmemb * size);
	if (!ptr)
		return (0);
	return (ptr);
}
