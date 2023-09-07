/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mauroliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 16:58:06 by mauroliv          #+#    #+#             */
/*   Updated: 2023/08/22 09:57:11 by mauroliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	light;
	int		flash;

	flash = 122;
	while (flash >= 97)
	{
		light = (char)flash--;
		write(1, &light, 1);
	}
}
