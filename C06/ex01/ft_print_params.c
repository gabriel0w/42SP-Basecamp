/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbelo-so <gbelo-so@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 03:45:49 by gbelo-so          #+#    #+#             */
/*   Updated: 2021/07/31 03:45:50 by gbelo-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

int	main(int argc, char *argv[])
{
	int	control;

	control = argc;
	argc = 2;
	while (argc <= control)
	{
		ft_putstr(argv[argc - 1]);
		ft_putstr("\n");
		argc++;
	}
	return (0);
}
