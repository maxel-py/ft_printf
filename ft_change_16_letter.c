/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_change_16_letter.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maksimelistratov <maksimelistratov@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 23:33:52 by maksimelist       #+#    #+#             */
/*   Updated: 2021/12/03 00:01:35 by maksimelist      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	ft_change_16_letter(int x, int marker)
{
	if (x == 15 && marker == 0)
		return ('f');
	else if (x == 15 && marker == 1)
		return ('F');
	else if (x == 14 && marker == 0)
		return ('e');
	else if (x == 14 && marker == 1)
		return ('E');
	else if (x == 13 && marker == 0)
		return ('d');
	else if (x == 13 && marker == 1)
		return ('D');
	else if (x == 12 && marker == 0)
		return ('c');
	else if (x == 12 && marker == 1)
		return ('C');
	else if (x == 11 && marker == 0)
		return ('b');
	else if (x == 11 && marker == 1)
		return ('B');
	else if (x == 10 && marker == 0)
		return ('a');
	else if (x == 10 && marker == 1)
		return ('A');
	return (0);
}
