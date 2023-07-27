/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 17:01:02 by mdanish           #+#    #+#             */
/*   Updated: 2023/07/25 17:01:04 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft/libft.h"
#include "ft_printf.h"

int	ft_print_str(char const *str)
{
	int	str_len;

	str_len = ft_strlen(str);
	ft_putstr_fd((char *)str, 1);
	return (str_len);
}
