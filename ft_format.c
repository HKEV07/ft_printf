/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenaait <ibenaait@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 10:54:18 by ibenaait          #+#    #+#             */
/*   Updated: 2022/11/26 21:12:02 by ibenaait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(va_list arg, int c)
{
	int		i;

	i = 0;
	if (c == '%')
		i += ft_putchar('%');
	else if (c == 's')
		i += ft_putstr(va_arg(arg, const char *));
	else if (c == 'd' || c == 'i')
		i += ft_putnbr_dec(va_arg(arg, int));
	else if (c == 'c')
		i += ft_putchar(va_arg(arg, int));
	else if (c == 'x' || c == 'X')
		i += ft_print_hex(va_arg(arg, unsigned int), c);
	else if (c == 'p')
	{
		i += ft_putstr("0x");
		i += ft_put_adr_m(va_arg(arg, unsigned long), c);
	}
	else if (c == 'u')
		i += ft_putnbr_dec(va_arg(arg, unsigned int));
	else
		i += ft_putchar(c);
	return (i);
}
