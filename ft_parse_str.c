/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maksimelistratov <maksimelistratov@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 23:39:03 by maksimelist       #+#    #+#             */
/*   Updated: 2021/12/03 00:02:27 by maksimelist      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_parse_str(va_list ap)
{
	char	*s;
	int		count;

	count = 0;
	s = (char *) va_arg(ap, char *);
	if (!s)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (s[count] != '\0')
	{
		write(1, &s[count], 1);
		count++;
	}
	return (count);
}
