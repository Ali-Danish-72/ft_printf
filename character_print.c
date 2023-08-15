/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   character_print.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 17:13:52 by mdanish           #+#    #+#             */
/*   Updated: 2023/08/15 14:46:02 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_character(int character)
{
	write(1, &character, 1);
	return (1);
}
