/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   address_print.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 13:37:45 by mdanish           #+#    #+#             */
/*   Updated: 2023/08/15 14:45:36 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	address(unsigned long int number)
{
	char	*hexa_lower_base;
	int		i;

	hexa_lower_base = "0123456789abcdef";
	i = 0;
	if (number > 15)
		i += address(number / 16);
	i += ft_print_character(hexa_lower_base[number % 16]);
	return (i);
}

int	ft_print_address(void *variable)
{
	unsigned long int	number;
	int					len;

	number = (unsigned long int)variable;
	len = 0;
	len += ft_print_string("0x");
	len += address(number);
	return (len);
}
