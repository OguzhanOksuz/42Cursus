/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ooksuz <ooksuz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 19:07:04 by Ooksuz            #+#    #+#             */
/*   Updated: 2022/12/10 04:07:10 by Ooksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_sort(int **a, int **b)
{
	int	i;
	int	loop;
	
	loop = 0;
	while (loop < 5)
	{
		i = 1;
		while (i <= a[0][0])
		{
			if (((a[0][i] >> loop) & 1) == 0)
				pb(a, b);
			else
				ra(a);
			i++;
		}
		while (b[0][0])
			pa(a, b);
		//abs sorted?
		loop++;
	}
	//negative sorted
	ft_printf("1 = %d\n 2 = %d\n 3 = %d\n 4 = %d\n 5 = %d\n 6 = %d\n", a[0][1], a[0][2], a[0][3], a[0][4], a[0][5], a[0][6]);
	return (1);
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
