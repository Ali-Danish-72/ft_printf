/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 18:47:10 by mdanish           #+#    #+#             */
/*   Updated: 2023/08/05 17:05:44 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_number(int nbr)
{
	int				i;

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
		i += ft_print_number(nbr / 10);
	i += ft_print_character((nbr % 10) + 48);
	return (i);
}
