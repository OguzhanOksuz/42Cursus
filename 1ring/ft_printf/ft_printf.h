/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ooksuz <ooksuz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:47:19 by Ooksuz            #+#    #+#             */
/*   Updated: 2022/10/19 10:45:33 by Ooksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
void	ft_specifer(va_list pa, const char format, int *len);
void	ft_putchr(const char c, int *len);
void	ft_putstr(const char *str, int *len);
void	ft_putnbr(int nbr, int *len);
void	ft_putnbru(unsigned int nbr, int *len);
void	ft_putnbruhex(unsigned int nbr, int *len, int flag);
void	ft_putptr(unsigned long long int ptr, int *len, int flag);
int	ft_printf(const char *format, ...);
#endif
