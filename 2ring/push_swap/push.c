/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ooksuz <ooksuz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 18:04:11 by Ooksuz            #+#    #+#             */
/*   Updated: 2022/12/09 20:00:04 by Ooksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(int **dststack, int **srcstack)
{
	int	i;

	i = dststack[0][0];
	if (srcstack[0][0] == 0)
		return ;
	while (i > 0)
	{
		dststack[0][i + 1] = dststack[0][i];
		i--;
	}
	dststack[0][1] = srcstack[0][1];
	i = 1;
	while (i < srcstack[0][0])
	{
		srcstack[0][i] = srcstack[0][i + 1];
		i++;
	}
	srcstack[0][i] = 0;
	dststack[0][0]++;
	srcstack[0][0]--;
}

void	pa(int **a, int **b)
{
	ft_printf("pa\n");
	push(a, b);
}

void	pb(int **a, int **b)
{
	ft_printf("pb\n");
	push(b, a);
}
