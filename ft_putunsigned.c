/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djewapat < djewapat@student.42bangkok.com> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 17:01:26 by djewapat          #+#    #+#             */
/*   Updated: 2024/03/23 12:26:10 by djewapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned(unsigned int n)
{
	unsigned int	len;
	char			*base;

	len = 0;
	base = "0123456789";
	if (n < 10)
		return (ft_putchar(base[n]));
	else
		len += ft_putunsigned(n / 10);
	len += ft_putchar(base[n % 10]);
	return (len);
}
