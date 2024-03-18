// # include <stdarg.h>
// # include <stdio.h>
// # include <stdlib.h>
// # include <stddef.h>
// # include <unistd.h>
// # include <string.h>

// int	ft_putchar(int c)
// {
// 	write (1, &c, 1);
// 	return (1);
// }

// int	ft_putstr(char *str)
// {
// 	unsigned int	i;

// 	i = 0;
// 	if (!str)
// 	{
// 		write (1, "(null)", 1);
// 		return (6);
// 	}
// 	while (*(str + i))
// 	{
// 		write (1, &str[i], 1);
// 		i++;
// 	}
// 	return (i);
// }

// int	ft_putnbr(int n)
// {
// 	unsigned int	len;
// 	//int			number;
// 	char		*base;

// //	number = n;
// 	len = 1;
// 	base = "0123456789";
// 	if (n == -2147483648)
// 		return (11);
// 	if (n < 0)
// 	{
// 		write (1, "-", 1);
// 		return (ft_putnbr(-n) + 1);
// 	}
// 	else if (n < 10)
// 		return (ft_putchar(base[n]));
// 	else
// 		len += ft_putnbr(n / 10);
// 	len += ft_putchar(base[n % 10]);
// 	return (len);
// }

// int	ft_putunsigned(unsigned int n)
// {
// 	unsigned int	len;
// 	char			*base;

// 	len = 0;
// 	base = "0123456789";
// 	if (n >= 10)
// 		len += ft_putunsigned(n / 10);
// 	len += ft_putchar(base[n % 10]);
// 	return (len);
// }

// int ft_puthexa(unsigned int n, char format)
// {
// 	char			*base;
// 	unsigned int	len;

// 	len = 0 ;
// 	if (format == 'x')
// 		base = "0123456789abcdef";
// 	if (format == 'X')
// 		base = "0123456789ABCDEF";
// 	if (n >= 16)
// 		len += ft_puthexa((n / 16), format);
// 	len += ft_putchar(*(base + (n % 16)));
// 	return (len);
// }

// int	ft_putaddress(void *p)
// {
// 	char			format;
// 	unsigned long	n;
// 	unsigned int	len;

// 	if (p == 0)
// 		return (ft_putstr("(nil)"));
// 	len = 2;
// 	n = (unsigned long)p;
// 	format = 'x';
// 	write (1, "0x", 2);
// 	len += ft_puthexa(n, format);
// 	return (len);
// }

// int	ft_format(va_list ap, char format)
// {
// 	int	len;

// 	len = 0;
// 	if (format == 'c')
// 		return (ft_putchar(va_arg(ap, int)));
// 	else if ( format == 's')
// 		return (ft_putstr(va_arg(ap, char *)));
// 	else if (format == 'p')
// 		return (ft_putaddress(va_arg(ap, void *)));	
// 	else if (format == 'd' || format == 'i')
// 		return (ft_putnbr(va_arg(ap, int)));
// 	else if (format == 'u')
// 		return (ft_putunsigned((va_arg(ap, unsigned int))));
// 	else if (format == 'x' || format == 'X')
// 		return (ft_puthexa(va_arg(ap, unsigned int), format));
// 	else
// 	{
// 		len += ft_putchar('%');
// 		len += write(1, &format, 1);
// 	}
// 	return (len);
// }


// int	ft_printf(const char *str, ...)
// {
// 	va_list			ap;
// 	unsigned int	len;
// 	unsigned int	i;
	
// 	len = 0;
// 	i = 0;
// 	va_start(ap, str);
// 	while (str[i])
// 	{
// 		if (str[i] == '%')
// 		{
// 			++i;
// 			if (str[i] == '%')
// 				len += write (1, &str[i], 1);
// 			else
// 				len += ft_format(ap, *(str + i));
// 		}
// 		else
// 			len += write (1, &str[i], 1);
// 		++i;
// 	}
// 	va_end(ap);
// 	return (len);
// }

// int	ft_printf(const char *str, ...)
// {
// 	va_list			ap;
// 	unsigned int	len;
// 	unsigned int	i;
	
// 	len = 0;
// 	i = 0;
// 	va_start(ap, str);
// 	while (str[i])
// 	{
// 		if (str[i] == '%')
// 		{
// 			++i;
// 			//++str;
// 			if (str[i] == '%')
// 				len += write (1, &str[i], 1);
// 			else
// 				len += ft_format(ap, *(str + i));
// 		}
// 		else
// 			len += write (1, &str[i], 1);
// 		++i;
// 	//	++str;
// 	}
// 	va_end(ap);
// 	return (len);
// }

// int main()
// {
//     char *p = "abc";

// 	printf("Hello, %c %s Hi %x %d %i %u %x %X %% Bye\n", 'M', "Min", p, -1232, -123, "abc", 234235, 21423235);
//     ft_printf("Hello, %c %s Hi %x %d %i %u %x %X %% Bye\n", 'M', "Min", p, -1232, -123, "abc", 234235, 21423235);

// 	printf("%x\n", p);
// 	ft_printf("%x\n", p);

// }