/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djewapat < djewapat@student.42bangkok.com> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 16:32:50 by djewapat          #+#    #+#             */
/*   Updated: 2024/03/14 16:52:27 by djewapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	unsigned int	len;
	int			number;

	number = n;
	len = 1;
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		write (1, "-", 1);
		number = -n;
		++len;
	}
	if (n >= 10)
		len += ft_putnbr(number / 10);
	len += ft_putchar((number % 10) + '0');
	//ft_putnbr_fd(n, 1);
	// if (number >= 10)
	// 	ft_putnbr(number / 10);
	// ft_putchar(number % 10 + '0');
	return (len);
}
// len = 1 in website say it start with 1 
//then loop dividing 10 until it's less than 10 ??
