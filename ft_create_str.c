/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maksimelistratov <maksimelistratov@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 23:40:29 by maksimelist       #+#    #+#             */
/*   Updated: 2021/12/05 20:31:22 by maksimelist      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_create_str(unsigned long int x, int len, int up_down)
{
	char	*hex;
	int		remainder;

	hex = (char *)malloc(sizeof(char) * (len + 1));
	if (!hex)
		return (0);
	hex[len] = '\0';
	if (x == 0)
		hex[--len] = '0';
	while (x)
	{
		remainder = x % 16;
		if (remainder > 9)
			hex[--len] = ft_change_16_letter(remainder, up_down);
		else
			hex[--len] = remainder + '0';
		x = x / 16;
	}
	return (hex);
}
