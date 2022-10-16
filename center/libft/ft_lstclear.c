/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ooksuz <ooksuz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 19:28:19 by Ooksuz            #+#    #+#             */
/*   Updated: 2022/10/17 01:21:02 by Ooksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del);
	else
	{
		while(lst[0]->next)
		{
			tmp = lst[0]->next;
			del(lst[0]->content);
			*lst = tmp;
		}
		del(lst[0]->content);
	}
}
