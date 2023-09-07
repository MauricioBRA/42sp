/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mauroliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 16:46:11 by mauroliv          #+#    #+#             */
/*   Updated: 2023/09/06 21:04:39 by mauroliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	m;

	i = 0;
	m = 0;
	while (dest[i] != '\0')
		i++;
	while ((m < nb) && (src[m] != '\0'))
	{
		dest[i] = src[m];
		i++;
		m++;
	}
	dest[i] = '\0';
	return (dest);
}
