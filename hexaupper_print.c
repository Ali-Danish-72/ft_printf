/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexalower_print.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 20:32:52 by mdanish           #+#    #+#             */
/*   Updated: 2023/07/25 20:32:53 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexaupper(int nbr)
{
	char	*hexa_upper_base;
	int		i;

	hexa_upper_base = "0123456789ABCDEF";
	i = 0;
	if (nbr == INT32_MIN)
	{
		write(1, "80000000", 8);
		return (9);
	}
	else if (nbr < 0)
		nbr = (0xffffffff + nbr + 1);
	if (nbr > -1 && nbr < 16)
		i += ft_print_char(hexa_upper_base[nbr]);
	if (nbr > 15)
	{
		i += ft_print_hexaupper(nbr / 16);
		i += ft_print_hexaupper(nbr % 16);
	}
	return (i);
}
