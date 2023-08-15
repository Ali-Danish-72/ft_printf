/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 18:47:10 by mdanish           #+#    #+#             */
/*   Updated: 2023/08/15 14:48:37 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_number(int number)
{
	int	i;

	i = 0;
	if (number == INT_MIN)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	else if (number < 0)
	{
		i += ft_print_character('-');
		number *= -1;
	}
	if (number > 9)
		i += ft_print_number(number / 10);
	i += ft_print_character((number % 10) + 48);
	return (i);
}
