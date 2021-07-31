/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbelo-so <gbelo-so@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 03:52:49 by gbelo-so          #+#    #+#             */
/*   Updated: 2021/07/31 03:52:50 by gbelo-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);
void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	if (argc < 3)
	{
		write (1, "Os parâmetros passados são inválidos.\n", 41);
		return (1);
	}
	rush(*argv[1] - '0', *argv[2] - '0');
}
