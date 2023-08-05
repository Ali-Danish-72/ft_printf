/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 14:34:16 by mdanish           #+#    #+#             */
/*   Updated: 2023/08/05 17:04:06 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <limits.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stdint.h>

int		ft_print_address(void *variable);
int		ft_print_character(int c);
int		ft_print_hexadecimal(int nbr, char specifier);
int		ft_print_number(int nbr);
int		ft_printf(const char *str, ...);
int		ft_print_string(char const *str);
int		ft_print_unsigned(unsigned int nbr);
size_t	ft_strlen(char const *str);

#endif
