/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maksimelistratov <maksimelistratov@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 23:42:20 by maksimelist       #+#    #+#             */
/*   Updated: 2021/12/03 00:02:32 by maksimelist      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_parse_unsigned(va_list ap)
{
	int				count;
	unsigned int	u;

	count = 0;
	u = (unsigned int)va_arg(ap, unsigned int);
	ft_putnbr_unsigned(u);
	if (u == 0)
		return (1);
	while (u > 0)
	{
		u = u / 10;
		count++;
	}
	return (count);
}
