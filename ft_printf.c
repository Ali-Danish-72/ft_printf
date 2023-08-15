/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 14:56:10 by mdanish           #+#    #+#             */
/*   Updated: 2023/08/15 14:46:48 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	format(char specifier, va_list ap)
{
	int	i;

	i = 0;
	if (specifier == 'c')
		i = ft_print_character(va_arg(ap, int));
	else if (specifier == 's')
		i = ft_print_string(va_arg(ap, const char *));
	else if (specifier == 'p')
		i = ft_print_address(va_arg(ap, void *));
	else if (specifier == 'd' || specifier == 'i')
		i = ft_print_number(va_arg(ap, int));
	else if (specifier == 'u')
		i = ft_print_unsigned(va_arg(ap, unsigned int));
	else if (specifier == 'x' || specifier == 'X')
		i = ft_print_hexadecimal(va_arg(ap, int), specifier);
	else if (specifier == '%')
		i = ft_print_character('%');
	return (i);
}

static int	specifier_check(char specifier)
{
	if (specifier == 'c')
		return (1);
	else if (specifier == 's')
		return (1);
	else if (specifier == 'p')
		return (1);
	else if (specifier == 'd')
		return (1);
	else if (specifier == 'i')
		return (1);
	else if (specifier == 'u')
		return (1);
	else if (specifier == 'x')
		return (1);
	else if (specifier == 'X')
		return (1);
	else if (specifier == '%')
		return (1);
	return (0);
}

int	ft_printf(const char *string, ...)
{
	int		i;
	int		str_len;
	va_list	ap;

	if (!string)
		return (0);
	i = 0;
	str_len = 0;
	va_start(ap, string);
	while (string[i])
	{
		if (string[i] == '%' && specifier_check(string[++i]))
			str_len += format(string[i], ap);
		else if (string[i])
			str_len += ft_print_character(string[i]);
		if (string[i])
			i++;
	}
	va_end(ap);
	return (str_len);
}
