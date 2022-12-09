/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ooksuz <ooksuz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 17:51:59 by Ooksuz            #+#    #+#             */
/*   Updated: 2022/12/09 19:32:30 by Ooksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(int **stack)
{
	if (stack[0][0] >= 2)
	{
		stack[0][1] = stack[0][1] + stack[0][2];
		stack[0][2] = stack[0][1] - stack[0][2];
		stack[0][1] = stack[0][1] - stack[0][2];
	}
}

void	sa(int **a)
{
	swap(a);
	ft_printf("sa\n");
}

void	sb(int **b)
{
	swap(b);
	ft_printf("sb\n");
}

void	ss(int **a, int **b)
{
	sa(a);
	sb(b);
	ft_printf("ss\n");
}
