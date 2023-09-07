/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mauroliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 19:07:13 by mauroliv          #+#    #+#             */
/*   Updated: 2023/08/30 20:27:44 by mauroliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	d;
	int	e;

	d = *a;
	e = *b;
	*a = d / e;
	*b = d % e;
}

int     main()
{
        int     car1;
        int     car2;

        car1 = 8;
        car2 = 5;
        ft_ultimate_div_mod(&car1, &car2);
        printf("Os valores de A e B, será o resultado da divisão e resto:\n Div = %d\n mod = %d", car1, car2);
}
