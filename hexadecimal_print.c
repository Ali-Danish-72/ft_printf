/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexadecimal_print.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 20:32:52 by mdanish           #+#    #+#             */
/*   Updated: 2023/08/15 14:48:16 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexadecimal(int number, char specifier)
{
	char			*hexadecimal_base;
	unsigned int	hexa_number;
	int				i;

	if (specifier == 'x')
		hexadecimal_base = "0123456789abcdef";
	else
		hexadecimal_base = "0123456789ABCDEF";
	i = 0;
	hexa_number = (unsigned int)number;
	if (hexa_number > 15)
		i += ft_print_hexadecimal(hexa_number / 16, specifier);
	i += ft_print_character(hexadecimal_base[hexa_number % 16]);
	return (i);
}
