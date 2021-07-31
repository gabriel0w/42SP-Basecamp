/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbelo-so <gbelo-so@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 03:53:03 by gbelo-so          #+#    #+#             */
/*   Updated: 2021/07/31 03:53:04 by gbelo-so         ###   ########.fr       */
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
			if (col == 0 && (row == 0 || row == y - 1))
				ft_putchar('A');
			else if (((row == 0 || row == y - 1) && (col != 0 && col != x - 1))
				|| ((row != 0 && row != y - 1) && (col == 0 || col == x - 1)))
				ft_putchar('B');
			else if ((col != 0 && col != x - 1))
				ft_putchar(' ');
			else
				ft_putchar('C');
			col++;
		}
		row++;
		ft_putchar('\n');
	}
}
