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
#include <stdint.h>

static int	digit_counter(int nbr)
{
	int	counter;

	if (nbr == 0)
		return (1);
	counter = 0;
	if (nbr < 0)
		counter++;
	while (nbr)
	{
		counter++;
		nbr /= 10;
	}
	return (counter);
}

int	ft_print_nbr(int nbr)
{
	ft_putnbr_fd(nbr, 1);
	return (digit_counter(nbr));
}
