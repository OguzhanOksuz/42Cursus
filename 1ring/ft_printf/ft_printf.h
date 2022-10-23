/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ooksuz <ooksuz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:47:19 by Ooksuz            #+#    #+#             */
/*   Updated: 2022/10/19 11:05:00 by Ooksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int		ft_specifer(va_list pa, const char format);
int		ft_putchr(int c);
int		ft_putstr(const char *str);
int		ft_putnbr(int nbr);
int		ft_putnbru(unsigned int nbr);
int		ft_putnbruhex(unsigned int nbr, int flag);
int		ft_putptr(unsigned long long int ptr, int flag);
int		ft_printf(const char *format, ...);

#endif
