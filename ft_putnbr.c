/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djewapat < djewapat@student.42bangkok.com> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 16:32:50 by djewapat          #+#    #+#             */
/*   Updated: 2024/03/18 14:58:22 by djewapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long n)
{
	unsigned int	len;
	char			*base;

	base = "0123456789";
	len = 0;
	// if (n == -2147483648)
	// 	return (11);
	if (n < 0)
	{
		write (1, "-", 1);
		return(ft_putnbr(-n) + 1);
	}
	if (n < 10)
		return (ft_putchar(base[n]));
	else
		len += ft_putnbr(n / 10);
	len += ft_putchar(base[n % 10]);
	return (len);
}

