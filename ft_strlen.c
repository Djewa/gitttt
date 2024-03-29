/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djewapat < djewapat@student.42bangkok.com> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 13:18:00 by djewapat          #+#    #+#             */
/*   Updated: 2024/03/14 12:16:16 by djewapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" // #include "ft_printf.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (*(str + i))
	{
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	char	*str;
// 	int		len;

// 	str = "abcdefg";
// 	len = ft_strlen(str);
// 	printf (" srt rt %d %s %u %sfgh sghkl;y/jlkl;ytdu", 10, "sdf", 23);
// }
