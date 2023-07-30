/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   address_print.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 13:37:45 by mdanish           #+#    #+#             */
/*   Updated: 2023/07/26 13:37:46 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	address(unsigned long int nbr)
{
	char	*hexa_lower_base;
	int		i;

	hexa_lower_base = "0123456789abcdef";
	i = 0;
	if (nbr > 15)
	{
		i += address(nbr / 16);
		i += address(nbr % 16);
	}
	else
		i += ft_print_character(hexa_lower_base[nbr]);
	return (i);
}

int	ft_print_address(void *variable)
{
	unsigned long int	nbr;
	int					len;

	nbr = (unsigned long int)variable;
	len = 0;
	len += ft_print_string("0x");
	len += address(nbr);
	return (len);
}
