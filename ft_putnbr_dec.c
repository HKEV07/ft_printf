/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_dec.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenaait <ibenaait@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 17:11:48 by ibenaait          #+#    #+#             */
/*   Updated: 2022/11/24 17:17:47 by ibenaait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_dec(long long nb)
{
	int		len;

	len = 0;
	if (nb == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	if (nb < 0)
	{
		nb *= -1;
		len += ft_putchar('-');
	}
	if (nb >= 10)
		len += ft_putnbr_dec(nb / 10);
	len += ft_putchar((nb % 10) + '0');
	return (len);
}
