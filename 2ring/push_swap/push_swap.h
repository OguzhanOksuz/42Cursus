/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ooksuz <ooksuz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 16:31:04 by Ooksuz            #+#    #+#             */
/*   Updated: 2022/12/09 20:29:58 by Ooksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>


void	rrotate(int **stack);
void	rra(int **a);
void	rrb(int **v);
void	rrr(int **a, int **b);
void	rotate(int **stack);
void	ra(int **a);
void	rb(int **v);
void	rr(int **a, int **b);
void	swap(int **stack);
void	sa(int **a);
void	sb(int **b);
void	ss(int **a, int **b);
void	push(int **a, int **b);
void	pa(int **a, int **b);
void	pb(int **a, int **b);
int		ft_printf(char *format, ...);
int		ft_numchecker(char *s);
int		ft_sort(int **a, int **b);
int		push_swap(int i, char **av);
int		ft_atoi(char *s);
#endif
