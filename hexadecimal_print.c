/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexadecimal_print.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 20:32:52 by mdanish           #+#    #+#             */
/*   Updated: 2023/08/05 17:04:55 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexadecimal(int nbr, char specifier)
{
	char			*hexadecimal_base;
	int				i;
	unsigned int	num;

	if (specifier == 'x')
		hexadecimal_base = "0123456789abcdef";
	else
		hexadecimal_base = "0123456789ABCDEF";
	i = 0;
	num = (unsigned int)nbr;
	if (num > 15)
		i += ft_print_hexadecimal(num / 16, specifier);
	i += ft_print_character(hexadecimal_base[num % 16]);
	return (i);
}
