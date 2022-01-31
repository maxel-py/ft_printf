/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_len_number.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maksimelistratov <maksimelistratov@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 23:32:53 by maksimelist       #+#    #+#             */
/*   Updated: 2021/12/03 10:55:19 by maksimelist      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_len_number(unsigned long int nbr, int base)
{
	int	i;

	i = 1;
	while (nbr / base)
	{
		nbr /= base;
		i++;
	}
	return (i);
}
