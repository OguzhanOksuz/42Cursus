/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ooksuz <ooksuz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:34:22 by Ooksuz            #+#    #+#             */
/*   Updated: 2022/12/08 23:54:43 by Ooksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_trim(char *rd)
{
	int		i;
	char	*rt;
	int		len;
	int		j;

	j = 0;
	i = 0;
	len = 0;
	while (rd[i] && rd[i] != '\n')
		i++;
	if (rd[i] == '\n')
		i++;
	len = ft_strlen(rd + i);
	rt = (char *)malloc(sizeof(char) * (len + 1));
	if (!rt)
		return (NULL);
	while (rd[i])
		rt[j++] = rd[i++];
	rt[j] = 0;
	return (rt);
}

char	*ft_line(char *rd)
{
	char	*rt;
	int		i;

	i = 0;
	if (!rd)
		return (NULL);
	while (rd[i] && rd[i] != '\n')
		i++;
	if (rd[i] == '\n')
		i++;
	rt = (char *)malloc(sizeof(char) * (i + 1));
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
	int		count;

	count = 1;
	rd = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!rd)
		return (NULL);
	while (count > 0)
	{
		count = read(fd, rd, BUFFER_SIZE);
		if ( count == -1)
		{
			//free (rd);
			//free (rt);
			return (NULL);
		}
		rt[count] = 0;
		rt = ft_strjoin(rt, rd);
		if (ft_strchr(rt, '\n'))
				break ;
	}
	//free (rd);
	return (rt);
}

char	*get_next_line(int fd)
{
	static char	*rd;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) <= 0)
		return (NULL);
	rd = ft_read(fd, rd);
	if (!rd)
		//free(rd);
	line = ft_line(rd);
	rd = ft_trim(rd);
	return (line);
}
