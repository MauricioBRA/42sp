/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mauroliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 13:22:20 by mauroliv          #+#    #+#             */
/*   Updated: 2023/08/22 09:59:01 by mauroliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	light;
	int		flash;

	flash = 97;
	while (flash <= 122)
	{
		light = (char)flash++;
		write(1, &light, 1);
	}
}
