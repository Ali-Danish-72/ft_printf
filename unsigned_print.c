/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unsigned_print.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 20:13:04 by mdanish           #+#    #+#             */
/*   Updated: 2023/07/25 20:13:05 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(unsigned int nbr)
{
	int	digit_count;

	digit_count = 0;
	if (nbr > 9)
	{
		digit_count += ft_print_unsigned((nbr / 10));
		digit_count += ft_print_unsigned((nbr % 10));
	}
	else
		digit_count += ft_print_character(nbr + 48);
	return (digit_count);
}
