/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 14:56:10 by mdanish           #+#    #+#             */
/*   Updated: 2023/07/25 14:56:12 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "Libft/libft.h"

static int	format(char specifier, va_list ap)
{
	int	i;

	if (specifier == 'c')
		i = ft_print_char(va_arg(ap, int));
	else if (specifier == 's')
		i = ft_print_str(va_arg(ap, const char *));
	else if (specifier == 'p')
		i = ft_print_address(va_arg(ap, void *));
	else if (specifier == 'd')
		i = ft_print_nbr(va_arg(ap, int));
	else if (specifier == 'i')
		i = ft_print_nbr(va_arg(ap, int));
	else if (specifier == 'u')
		i = ft_print_unsigned(va_arg(ap, unsigned int));
	else if (specifier == 'x')
		i = ft_print_hexalower(va_arg(ap, int));
	else if (specifier == 'X')
		i = ft_print_hexaupper(va_arg(ap, int));
	else if (specifier == '%')
		i = ft_print_percent();
	return (i);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		str_len;
	va_list	ap;

	if (!str)
		return (0);
	i = 0;
	str_len = 0;
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] == '%')
			str_len += format(str[i + 1], ap);
		else
		{
			ft_putchar_fd(str[i], 1);
			str_len++;
		}
		i++;
	}
	return (str_len);
}
