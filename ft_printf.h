/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenaait <ibenaait@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 18:29:24 by ibenaait          #+#    #+#             */
/*   Updated: 2022/11/26 21:11:59 by ibenaait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <string.h>
# include <stdio.h>
# include <unistd.h>
# include <stdalign.h>
# include <stdarg.h>

# define LOW_HEX "0123456789abcdef"
# define UPP_HEX "0123456789ABCDEF"

int		ft_printf(const char *s, ...);
int		ft_putchar(int c);
int		ft_putstr(const char *s);
int		ft_format(va_list arg, int c);
int		ft_print_hex(unsigned long h, char c);
int		ft_putnbr_dec(long long nb);
int		ft_put_adr_m(unsigned long d, char c);

#endif
