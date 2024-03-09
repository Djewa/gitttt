/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djewapat < djewapat@student.42bangkok.com> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 16:32:50 by djewapat          #+#    #+#             */
/*   Updated: 2024/03/09 17:06:16 by djewapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int	ft_putnbr(int n)
{
	unsigned int	len;
	long			number;

	number = n;
	len = 1;
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		number = -n;
		len++;
	}
	while (n >= 10)
	{
		number /= 10;
		len++;
	}
	ft_putnbr_fd(n, 1);
	return (len);
}
// len = 1 in website say it start with 1 
//then loop dividing 10 until it's less than 10 ??
