/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-mota <bea.mota04@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 11:12:09 by bda-mota          #+#    #+#             */
/*   Updated: 2023/08/20 11:33:39 by bda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	buildrectangle(int x, int y, int column, int line);

void	rush(int x, int y)
{
	int	line;
	int	column;

	line = 1;
	while (line <= y)
	{
		column = 1;
		while (column <= x)
		{
			buildrectangle(x, y, column, line);
			column++;
		}
		ft_putchar('\n');
		line++;
	}
}

void	buildrectangle(int x, int y, int column, int line)
{
	if ((line == 1 || line == y) && (column == 1 || column == x))
	{
		ft_putchar('o');
	}
	else if (column == 1 || column == x)
	{
		ft_putchar('|');
	}
	else if ((line == 1 || line == y) && (column != 1 || column != x))
	{
		ft_putchar('-');
	}
	else
	{
		ft_putchar(' ');
	}
}
