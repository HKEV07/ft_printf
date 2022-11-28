/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenaait <ibenaait@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 19:16:50 by ibenaait          #+#    #+#             */
/*   Updated: 2022/11/26 21:11:55 by ibenaait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	len_nb(unsigned long nb)
{
	long long	len;

	len = 0;
	if (nb == 0)
		return (1);
	while (nb != 0)
	{
		nb = nb / 16;
		len++;
	}
	return (len);
}

void	ft_put_hd(unsigned long d, char c)
{
	char	*hex;

	if (c == 'x' || c == 'p')
		hex = LOW_HEX;
	else
		hex = UPP_HEX;
	if (d < 16)
		ft_putchar(hex[d]);
	else
	{
		ft_put_hd(d / 16, c);
		ft_put_hd(d % 16, c);
	}
}

int	ft_print_hex(unsigned long h, char c)
{
	if (h == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	ft_put_hd(h, c);
	return (len_nb(h));
}

int	ft_put_adr_m(unsigned long d, char c)
{
	if (d == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	ft_put_hd(d, c);
	return (len_nb(d));
}
