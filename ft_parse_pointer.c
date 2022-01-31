/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maksimelistratov <maksimelistratov@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 23:43:41 by maksimelist       #+#    #+#             */
/*   Updated: 2021/12/03 00:02:19 by maksimelist      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_parse_pointer(va_list ap)
{
	int						len;
	unsigned long int		x;
	char					*hex;

	x = (unsigned long int)va_arg(ap, unsigned long int);
	len = ft_len_number(x, 16);
	hex = ft_create_str(x, len, 0);
	if (!hex)
		return (0);
	ft_putstr("0x");
	ft_putstr(hex);
	free (hex);
	return (len + 2);
}
