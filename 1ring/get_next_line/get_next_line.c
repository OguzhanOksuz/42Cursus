/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ooksuz <ooksuz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:34:22 by Ooksuz            #+#    #+#             */
/*   Updated: 2022/12/07 22:30:37 by Ooksuz           ###   ########.fr       */
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
		return (NULL);
	}
	rt = ft_calloc((ft_strlen(rd) - i + 1), sizeof(char));
	if (!rt)
		return (NULL);
	i++;
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
	if (!rd[i])
		return (NULL);
	while (rd[i] && rd[i] != '\n')
		i++;
	rt = ft_calloc((i + 1 + 1), sizeof(char));
	if (!rt)
		return (NULL);
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

	if (!rt)
		rt = ft_calloc(1, 1);
	bytes = 1;
	rd = ft_calloc((BUFFER_SIZE + 1), sizeof(char));
	if (!rd)
		return (NULL);
	while (bytes)
	{
		bytes = read(fd, rd, BUFFER_SIZE);
		if (bytes < 0)
		{
			free(rd);
			free(rt);
			return (NULL);
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

	if (fd <= 0 || BUFFER_SIZE <= 0)
		return (NULL);
	rd = ft_read(fd, rd);
	if (!rd)
		return (NULL);
	line = ft_line(rd);
	rd = ft_trim(rd);
	return (line);
}
