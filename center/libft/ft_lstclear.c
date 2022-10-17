/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ooksuz <ooksuz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 19:28:19 by Ooksuz            #+#    #+#             */
/*   Updated: 2022/10/17 13:24:10 by Ooksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!del || !lst);
	else
	{
		while (*lst && del)
		{
			tmp = lst[0]->next;
			ft_lstdelone(*lst, del);
			free (lst[0]);
			*lst = tmp;
		}

		*lst = NULL;
	}
}
