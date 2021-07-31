/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbelo-so <gbelo-so@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 21:55:19 by gbelo-so          #+#    #+#             */
/*   Updated: 2021/07/28 02:59:14 by gbelo-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_combination(char num1, char num2, char num3, char num4)
{
	write(1, &num1, 1);
	write(1, &num2, 1);
	write(1, " ", 1);
	write(1, &num3, 1);
	write(1, &num4, 1);
	if (!(num1 == '9' && num2 == '8' && num3 == '9' && num4 == '9'))
		write(1, ", ", 2);
}

void	second_set(char num1, char num2)
{
	char	num3;
	char	num4;

	num4 = '0';
	num3 = num1;
	if (num2 < '9')
		num4 = num2 + 1;
	else
		num3 = num1 + 1;
	while (num3 <= '9')
	{
		while (num4 <= '9')
		{	
			write_combination(num1, num2, num3, num4);
			num4++;
		}
		num4 = '0';
		num3++;
	}
}

void	ft_print_comb2(void)
{
	char	num1;
	char	num2;

	num1 = '0';
	num2 = '0';
	while (num1 <= '9')
	{
		while (num2 <= '9')
		{
			if (num1 == '9' && num2 == '9')
				break ;
			second_set(num1, num2);
			num2++;
		}
		num1++;
		num2 = '0';
	}
}
