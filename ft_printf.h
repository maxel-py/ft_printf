/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maksimelistratov <maksimelistratov@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 10:45:11 by maksimelist       #+#    #+#             */
/*   Updated: 2021/12/06 16:29:12 by maksimelist      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "ft_printf.h"
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_len_number(unsigned long int nbr, int base);
int		ft_parse_char(va_list ap);
int		ft_parse_str(va_list ap);
int		ft_parse_int_dec(va_list ap);
int		ft_parse_x_lower(va_list ap);
int		ft_parse_x_upper(va_list ap);
int		ft_parse_unsigned(va_list ap);
int		ft_parse_pointer(va_list ap);
int		ft_printf(const char *str, ...);
char	ft_change_16_letter(int x, int marker);
char	*ft_create_str(unsigned long int x, int len, int up_down);
void	ft_putchar(char c);
void	ft_putstr(char *s);
void	ft_putnbr(int n);
void	ft_putnbr_unsigned(unsigned int n);
size_t	ft_strlen(const char *s);

#endif
