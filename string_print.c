/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 17:01:02 by mdanish           #+#    #+#             */
/*   Updated: 2023/08/15 14:49:21 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_string(char const *string)
{
	int	string_length;

	if (!string)
	{
		write(1, "(null)", 6);
		return (6);
	}
	string_length = ft_strlen(string);
	write(1, string, string_length);
	return (string_length);
}
