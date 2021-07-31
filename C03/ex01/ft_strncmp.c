/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbelo-so <gbelo-so@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 03:41:44 by gbelo-so          #+#    #+#             */
/*   Updated: 2021/07/31 03:41:45 by gbelo-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{	
	unsigned int	count;

	count = 0;
	if (n == 0)
		return (0);
	while (*s1 != '\0' && *s1 == *s2 && count < n - 1)
	{
		s1++;
		s2++;
		count++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
