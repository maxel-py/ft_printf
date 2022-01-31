/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_x_lower.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maksimelistratov <maksimelistratov@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 23:41:16 by maksimelist       #+#    #+#             */
/*   Updated: 2021/12/03 11:48:41 by maksimelist      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_parse_x_lower(va_list ap)
{
	int				len;
	char			*hex;
	unsigned int	x;

	x = (unsigned int)va_arg(ap, unsigned int);
	len = ft_len_number(x, 16);
	hex = ft_create_str(x, len, 0);
	ft_putstr(hex);
	free (hex);
	return (len);
}
