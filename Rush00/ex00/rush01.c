/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbelo-so <gbelo-so@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 03:52:56 by gbelo-so          #+#    #+#             */
/*   Updated: 2021/07/31 03:52:57 by gbelo-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	col;
	int	row;

	row = 0;
	while (row < y)
	{
		col = 0;
		while (col < x)
		{
			if ((row == 0 && col == 0)
				|| (x != 1 && y != 1 && row == y - 1 && col == x - 1))
				ft_putchar('/');
			else if ((row == 0 && col == x - 1) || (row == y - 1 && col == 0))
				ft_putchar('\\');
			else if (col == 0 || col == x - 1 || row == 0 || row == y - 1)
				ft_putchar('*');
			else
				ft_putchar(' ');
			col++;
		}
		row++;
		ft_putchar('\n');
	}
}
