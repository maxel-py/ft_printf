/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_x_upper.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maksimelistratov <maksimelistratov@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 23:41:51 by maksimelist       #+#    #+#             */
/*   Updated: 2021/12/03 00:02:42 by maksimelist      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_parse_x_upper(va_list ap)
{
	int				len;
	unsigned int	x;
	char			*hex;

	x = (unsigned int)va_arg(ap, unsigned int);
	len = ft_len_number(x, 16);
	hex = ft_create_str(x, len, 1);
	ft_putstr(hex);
	free (hex);
	return (len);
}
