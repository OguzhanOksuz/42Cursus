/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ooksuz <ooksuz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 20:23:04 by Ooksuz            #+#    #+#             */
/*   Updated: 2022/12/09 20:33:20 by Ooksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrotate(int **stack)
{
	int	i;
	int	tmp;

	i = stack[0][0];
	tmp = stack[0][i];
	while (i > 1)
	{
		stack[0][i] = stack[0][i - 1];
		i--;
	}
	stack[0][1] = tmp;
}

void	rra(int **a)
{
	rrotate(a);
	ft_printf("rra\n");
}

void	rrb(int **b)
{
	rrotate(b);
	ft_printf("rrb\n");
}

void	rrr(int **a, int **b)
{
	rrotate(a);
	rrotate(b);
	ft_printf("rrr\n");
}
