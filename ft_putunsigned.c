/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djewapat < djewapat@student.42bangkok.com> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 17:01:26 by djewapat          #+#    #+#             */
/*   Updated: 2024/03/09 17:13:45 by djewapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int	ft_putunsigned(unsigned long n)
{
	unsigned int	len;
	unsigned int	base_len;
	char			*base;

	len = 0;
	base = "0123456789";
	base_len = ft_strlen(base); 
	if (n >= base_len)
	{
		ft_putunsigned(n / base_len);
		
	}
	return (len);
}
