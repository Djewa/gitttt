/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djewapat < djewapat@student.42bangkok.com> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 13:51:59 by djewapat          #+#    #+#             */
/*   Updated: 2024/03/14 16:59:09 by djewapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	write (1, &c, 1);
	return (1);
}

// return (1) because it wants the len then char = 1 character or 1 len
// int	main(void)
// {
// 	char	c;

// 	c = 'a';
// 	printf("%d\n", ft_putchar(c));
// }
