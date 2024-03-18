/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djewapat < djewapat@student.42bangkok.com> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:06:33 by djewapat          #+#    #+#             */
/*   Updated: 2024/03/18 14:40:38 by djewapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putaddress(void *p)
{
	char			format;
	unsigned int	len;

	if (p == 0)
		return (ft_putstr("(nil)"));
	len = 2;
	format = 'x';
	write (1, "0x", 2);
	len += ft_puthexa((unsigned long)p, format);
	return (len);
}
