/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mauroliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 13:23:25 by mauroliv          #+#    #+#             */
/*   Updated: 2023/09/06 21:04:01 by mauroliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	trunc;
	int	count;

	trunc = 0;
	count = 0;
	while (dest[trunc] != '\0')
	{
		trunc++;
	}
	while (src[count] != '\0')
	{
		dest[trunc] = src[count];
		trunc++;
		count++;
	}
	dest[trunc] = '\0';
	trunc++;
	return (dest);
}
