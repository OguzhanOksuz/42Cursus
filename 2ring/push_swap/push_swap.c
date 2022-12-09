/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ooksuz <ooksuz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 19:07:04 by Ooksuz            #+#    #+#             */
/*   Updated: 2022/12/09 22:11:38 by Ooksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_sort(int **a, int **b)
{

}

int	push_swap(int i, char **av)
{
	int	*a;
	int	*b;

	a = (int *)malloc(sizeof(int) * i);
	b = (int *)malloc(sizeof(int) * i);
	if (!a || !b)
		return (0);
	a[0] = i - 1;
	b[0] = 0;
	while (i > 1)
	{
		a[i - 1] = ft_atoi(av[i - 1]);
		i--;
	}
	i = ft_sort(&a, &b);
	free(a);
	free(b);
	return(1);
}

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		if (!ft_numchecker(av[i]))
		{
			ft_printf("Error\n");
			return (-1);
		}
		i++;
	}
	if (!push_swap(i, av))
	{
		ft_printf("Error\n");
		return(0);
	}
	return(1);
}
