/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nbr_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 18:47:10 by mdanish           #+#    #+#             */
/*   Updated: 2023/07/25 18:47:11 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_number(int nbr)
{
	char			*decimal_base;
	int				i;

	decimal_base = "0123456789";
	i = 0;
	if (nbr == INT_MIN)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	else if (nbr < 0)
	{
		i += ft_print_character('-');
		nbr *= -1;
	}
	if (nbr > 9)
	{
		i += ft_print_number(nbr / 10);
		i += ft_print_number(nbr % 10);
	}
	else if (nbr < 10 && nbr > -1)
		i += ft_print_character(decimal_base[nbr]);
	return (i);
}
