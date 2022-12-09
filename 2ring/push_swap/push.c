/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ooksuz <ooksuz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 18:04:11 by Ooksuz            #+#    #+#             */
/*   Updated: 2022/12/09 18:48:47 by Ooksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	push(int **dststack, int **srcstack)
{
	int i;

	i = *dststack[0];
	if (*srcstack[0] == 0)
		return ;
	while (i > 0)
	{
		*dststack[i + 1] = *dststack[i];
		i--;
	}
	*dststack[1] = *srcstack[1];
}

void	pa(int **a, int **b)
{
	ft_printf("pa\n");
	push(a, b);
	(void) a;
	(void) b;
}

void	pb(int **a, int **b)
{
	ft_printf("pb\n");
	push(b, a);
}
