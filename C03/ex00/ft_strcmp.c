/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbelo-so <gbelo-so@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 03:41:38 by gbelo-so          #+#    #+#             */
/*   Updated: 2021/07/31 03:41:39 by gbelo-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	count;

	count = 0;
	while (s1[count] == s2[count] && s1[count] != '\0')
	{
		count++;
	}
	return ((unsigned char)s1[count] - (unsigned char)s2[count]);
}
