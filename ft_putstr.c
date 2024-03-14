/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djewapat < djewapat@student.42bangkok.com> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 14:41:35 by djewapat          #+#    #+#             */
/*   Updated: 2024/03/14 16:53:40 by djewapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	unsigned int	i;

	i = 0;
	if (!str)
	{
		write (1, "(null)", 1);
		return (6);
	}
	while (*(str + i))
	{
		write (1, &str[i], 1);
		i++;
	}
	return (i);
}
// return 6 = length of null
