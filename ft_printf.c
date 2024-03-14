/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djewapat < djewapat@student.42bangkok.com> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 12:09:06 by djewapat          #+#    #+#             */
/*   Updated: 2024/03/14 17:01:58 by djewapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(va_list ap, char format)
{
	int	len;

	len = 0;
	if (format == '%')
		len += (ft_putchar(format));
	else if (format == 'c')
		return (ft_putchar(va_arg(ap, int)));
	else if ( format == 's')
		return (ft_putstr(va_arg(ap, char *)));
	else if (format == 'p')
		return (ft_putaddress(va_arg(ap, void *)));	
	else if (format == 'd' || format == 'i')
		return (ft_putnbr(va_arg(ap, int)));
	else if (format == 'u')
		return (ft_putunsigned((va_arg(ap, unsigned int))));
	else if (format == 'x' || format == 'X')
		return (ft_puthexa(va_arg(ap, unsigned int), format));
	else
	{
		len += ft_putchar('%');
		len += write(1, &format, 1);
	}
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list			ap;
	unsigned int	len;
	unsigned int	i;
	
	len = 0;
	i = 0;
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			++i;
			len += ft_format(ap, str[i]);
		}
		else
			len += write (1, str, 1);
		++i;
	}
	va_end(ap);
	return (len);
}
int	main ()
{
	ft_printf("%d\n", 120);
}