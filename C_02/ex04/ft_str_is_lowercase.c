/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mauroliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 17:45:39 by mauroliv          #+#    #+#             */
/*   Updated: 2023/09/01 18:45:57 by mauroliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	ltd;

	ltd = 0;
	while (str[ltd] != '\0')
	{
		if (str[ltd] < 97 || str[ltd] > 122)
		{
			return (0);
		}
			ltd++;
	}
	return (1);
}