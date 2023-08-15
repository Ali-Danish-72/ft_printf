/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unsigned_print.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 20:13:04 by mdanish           #+#    #+#             */
/*   Updated: 2023/08/15 14:48:51 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(unsigned int number)
{
	int	digit_count;

	digit_count = 0;
	if (number > 9)
		digit_count += ft_print_unsigned((number / 10));
	digit_count += ft_print_character((number % 10) + 48);
	return (digit_count);
}
