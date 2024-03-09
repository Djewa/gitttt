/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djewapat < djewapat@student.42bangkok.com> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 13:51:59 by djewapat          #+#    #+#             */
/*   Updated: 2024/03/09 16:34:55 by djewapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" // #include "ft_printf.h"

// void	ft_putchar_fd(char c, int fd)
// {
// 	write(fd, &c, 1);
// 	write(1, "\n", 1);
// }

int	ft_putchar(char c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

// int	main(void)
// {
// 	char	c;

// 	c = 'a';
// 	printf("%d\n", ft_putchar(c));
// }
