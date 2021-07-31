/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbelo-so <gbelo-so@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 18:52:45 by gbelo-so          #+#    #+#             */
/*   Updated: 2021/07/22 18:52:46 by gbelo-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	ctrl_nbr;

	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			nb = 147483648;
			write(1, "2", 1);
			ctrl_nbr = nb;
		}
		else
			ctrl_nbr = (nb) * (-1);
	}
	else
		ctrl_nbr = nb;
	if (ctrl_nbr >= 10)
	{
		ft_putnbr(ctrl_nbr / 10);
	}
	ctrl_nbr = ctrl_nbr % 10 + '0';
	ft_putchar(ctrl_nbr);
}
