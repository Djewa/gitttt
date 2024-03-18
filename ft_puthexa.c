/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djewapat < djewapat@student.42bangkok.com> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 11:49:40 by djewapat          #+#    #+#             */
/*   Updated: 2024/03/18 16:42:35 by djewapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned long n, char format)
{
	char			*base;
	unsigned int	len;

	len = 0 ;
	if (format == 'x')
		base = "0123456789abcdef";
	if (format == 'X')
		base = "0123456789ABCDEF";
	if (n < 16)
		return (ft_putchar(base[n]));
	else
	{
		len = ft_puthexa((n / 16), format);
		return (len + ft_puthexa((n % 16), format));
	}
	return (len);
}
