/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maksimelistratov <maksimelistratov@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 00:01:07 by maksimelist       #+#    #+#             */
/*   Updated: 2021/12/05 20:30:07 by maksimelist      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_parse(const char *str, va_list ap)
{
	if (*str == 'c')
		return (ft_parse_char(ap));
	else if (*str == 's')
		return (ft_parse_str(ap));
	else if (*str == '%')
		return (write(1, "%", 1));
	else if (*str == 'p')
		return (ft_parse_pointer(ap));
	else if (*str == 'i' || *str == 'd')
		return (ft_parse_int_dec(ap));
	else if (*str == 'x')
		return (ft_parse_x_lower(ap));
	else if (*str == 'X')
		return (ft_parse_x_upper(ap));
	else if (*str == 'u')
		return (ft_parse_unsigned(ap));
	return (1);
}

int	ft_printf(const char *str, ...)
{
	va_list		ap;
	int			count;

	count = 0;
	va_start(ap, str);
	while (*str != '\0')
	{
		if (*str == '%')
			count += ft_parse(++str, ap);
		else
		{
			count += 1;
			write(1, str, 1);
		}
		str++;
	}
	va_end(ap);
	return (count);
}
