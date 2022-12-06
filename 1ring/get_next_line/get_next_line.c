/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ooksuz <ooksuz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:34:22 by Ooksuz            #+#    #+#             */
/*   Updated: 2022/12/06 20:57:54 by Ooksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_trim(char *rd)
{
	int		i;
	int		j;
	char	*rt;

	j = 0;
	i = 0;
	while (rd[i] && rd[i] != '\n')
		i++;
	if (!rd[i])
	{	
		free(rd);
		return (0);
	}
	rt = malloc((ft_strlen(rd) - i + 1) * sizeof(char));
	while (rd[i])
		rt[j++] = rd[i++];
	free(rd);
	return (rt);
}

char	*ft_line(char *rd)
{
	int		i;
	char	*rt;

	i = 0;
	while (rd[i] && rd[i] != '\n')
		i++;
	rt = malloc((i + 1 + 1) * sizeof(char));
	if (!rt)
		return (0);
	i = 0;
	while (rd[i] && rd[i] != '\n')
	{
		rt[i] = rd[i];
		i++;
	}
	if (rd[i] == '\n')
		rt[i++] = '\n';
	rt[i] = 0;
	return (rt);
}

char	*ft_read(int fd, char *rt)
{
	char	*rd;
	int		bytes;

	bytes = 1;
	rd = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!rd)
		return (0);
	while (bytes > 0)
	{
		bytes = read(fd, rd, BUFFER_SIZE);
		if (bytes < 0)
		{
			free(rd);
			return (0);
		}
		rd[bytes] = 0;
		rt = ft_strjoin(rt, rd);
		if (ft_strchr(rd, '\n'))
			break ;
	}
	free(rd);
	return (rt);
}

char	*get_next_line(int fd)
{
	static char	*rd;
	char		*line;

	if (fd <= 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (0);
	rd = ft_read(fd, rd);
	line = ft_line(rd);
	rd = ft_trim(rd);
	return (line);
}
