/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 14:34:16 by mdanish           #+#    #+#             */
/*   Updated: 2023/08/15 14:44:51 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <limits.h>
# include <stdint.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

int		ft_print_address(void *variable);
int		ft_print_character(int character);
int		ft_print_hexadecimal(int number, char specifier);
int		ft_print_number(int number);
int		ft_printf(const char *string, ...);
int		ft_print_string(char const *string);
int		ft_print_unsigned(unsigned int number);
size_t	ft_strlen(char const *string);

#endif
