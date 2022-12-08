/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ooksuz <ooksuz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:46:07 by Ooksuz            #+#    #+#             */
/*   Updated: 2022/12/08 23:09:31 by Ooksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

size_t	ft_strlen(const char *str);
char	*ft_strjoin(char *s1, char *s2);
int		ft_strchr(const char *s, int c);
char	*ft_trim(char *rd);
char	*ft_line(char *line);
char	*ft_read(int fd, char *rt);
char	*get_next_line(int fd);

#endif
