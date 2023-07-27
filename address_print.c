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
#include <stdio.h>

int	ft_print_address(void *variable)
{
	write(1, "0x", 2);
	return (ft_print_hexalower((long int)variable) + 2);
}
