/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ooksuz <ooksuz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 20:01:49 by Ooksuz            #+#    #+#             */
/*   Updated: 2022/12/09 20:28:53 by Ooksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(int **stack)
{
	int	i;
	int	tmp;

	i = 1;
	tmp = stack[0][1];
	while (i < stack[0][0])
	{
		stack[0][i] = stack[0][i + 1];
		i++;
	}
	stack[0][i] = tmp;
}

void	ra(int **a)
{
	rotate(a);
	ft_printf("ra\n");
}

void	rb(int **b)
{
	rotate(b);
	ft_printf("rb\n");
}

void	rr(int **a, int **b)
{
	rotate(a);
	rotate(b);
	ft_printf("rr\n");
}
