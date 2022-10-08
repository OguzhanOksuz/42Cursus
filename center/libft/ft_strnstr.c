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

char	*ft_strnstr(const char *big, const char *little, unsigned int loc)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (big[i] && i < loc)
	{
		j = 0;
		if (big[i] == little[j])
		{
			while (big[i + j] == little[j])
				j++;
			if (little[j] == 0)
				return ((char *)big + i);
		}
		i++;
	}
	return (0);
}
