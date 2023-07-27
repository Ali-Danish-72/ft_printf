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

#include "Libft/libft.h"
#include "ft_printf.h"

int	ft_print_hexalower(long int nbr)
{
	char	*hexa_lower_base;
	int		i;

	hexa_lower_base = "0123456789abcdef";
	i = 0;
	if (nbr == INT32_MIN)
	{
		write(1, "80000000", 8);
		return (9);
	}
	else if (nbr < 0)
		nbr = (0xffffffff + nbr + 1);
	if (nbr > -1 && nbr < 16)
		i += ft_print_char(hexa_lower_base[nbr]);
	if (nbr > 15)
	{
		i += ft_print_hexalower(nbr / 16);
		i += ft_print_hexalower(nbr % 16);
	}
	return (i);
}
