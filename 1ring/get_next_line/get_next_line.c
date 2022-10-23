/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ooksuz <ooksuz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:34:22 by Ooksuz            #+#    #+#             */
/*   Updated: 2022/10/19 19:35:20 by Ooksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	get_next_line(int fd, char **line)
{
	int	rt;

	rt = read(fd, (void *)*line, BUFFER_SIZE - 1);
	if (rt == 0)
		return (0);
	else if (rt == -1)
		return (-1);
	else
		return (1);
}
