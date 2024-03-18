/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djewapat < djewapat@student.42bangkok.com> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 12:09:06 by djewapat          #+#    #+#             */
/*   Updated: 2024/03/18 16:40:26 by djewapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(va_list ap, char format)
{
	int	len;

	len = 0;
	if (format == 'c')
		return (ft_putchar(va_arg(ap, int)));
	else if (format == 's')
		return (ft_putstr(va_arg(ap, char *)));
	else if (format == 'p')
		return (ft_putaddress(va_arg(ap, void *)));
	else if (format == 'd' || format == 'i')
		return (ft_putnbr((long)va_arg(ap, int)));
	else if (format == 'u')
		return (ft_putunsigned((va_arg(ap, unsigned int))));
	else if (format == 'x' || format == 'X')
		return (ft_puthexa((long)(va_arg(ap, unsigned int)), format));
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
			if (str[i] == '%')
				len += write (1, &str[i], 1);
			else
				len += ft_format(ap, str[i]);
		}
		else
			len += write (1, &str[i], 1);
		++i;
	}
	va_end(ap);
	return (len);
}

// int main()
// {
// 	char	*p = NULL;

// 	printf("Hello, %c %s Hi %yfg %p %d %i %u %x %X %% Bye\n", 
// 	'M', "Miin", p, -214748364, 214748364, 2147483647, 9999999999, 9999999999);
// 	ft_printf("Hello, %c %s Hi %yfg %p %d %i %u %x %X %% Bye\n", 
// 	'M', "Miin", p, -214748364, 214748364, 2147483647, 9999999999, 9999999999);
// }
