/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_int_dec.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maksimelistratov <maksimelistratov@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 23:39:39 by maksimelist       #+#    #+#             */
/*   Updated: 2021/12/03 00:02:02 by maksimelist      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_parse_int_dec(va_list ap)
{
	int	n;
	int	count;

	count = 0;
	n = (int) va_arg(ap, int);
	ft_putnbr(n);
	if (n == -2147483648)
		return (11);
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		count = 1;
	}
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}
