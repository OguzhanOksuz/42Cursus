/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ooksuz <ooksuz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 18:39:17 by Ooksuz            #+#    #+#             */
/*   Updated: 2022/10/17 12:13:07 by Ooksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*rt;

	rt = (t_list *)malloc(sizeof(t_list));
	if (!rt)
		return (0);
	rt->content = content;
	rt->next = NULL;
	return (rt);
}
