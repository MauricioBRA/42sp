/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mauroliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:41:43 by mauroliv          #+#    #+#             */
/*   Updated: 2023/09/06 11:48:46 by mauroliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	traj;

	traj = 0;
	while (traj < n && src[traj] != '\0')
	{
		dest[traj] = src[traj];
		traj++;
	}
	while (traj < n)
	{
		dest[traj] = '\0';
		traj++;
	}
	return (dest);
}
