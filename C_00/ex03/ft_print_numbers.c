/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mauroliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 10:00:18 by mauroliv          #+#    #+#             */
/*   Updated: 2023/08/22 16:38:51 by mauroliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int		counter;
	char	num;

	counter = 48;
	while (counter <= 57)
	{
		num = (char)counter++;
		write(1, &num, 1);
	}
}
