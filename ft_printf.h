/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 14:34:16 by mdanish           #+#    #+#             */
/*   Updated: 2023/07/26 14:34:19 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "Libft/libft.h"

int	ft_print_address(void *variable);
int	ft_print_char(int c);
int	ft_print_hexalower(long int nbr);
int	ft_print_hexaupper(int nbr);
int	ft_print_nbr(int nbr);
int	ft_print_percent(void);
int	ft_print_str(char const *str);
int	ft_print_unsigned(unsigned int nbr);

#endif
