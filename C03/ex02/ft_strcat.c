/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbelo-so <gbelo-so@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 03:41:49 by gbelo-so          #+#    #+#             */
/*   Updated: 2021/07/31 03:41:50 by gbelo-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	count;
	unsigned int	count_2;

	count = 0;
	while (dest[count] != '\0')
	{
		count++;
	}
	count_2 = 0;
	while (src[count_2] != '\0')
	{
		dest[count] = src[count_2];
		count++;
		count_2++;
	}
	dest[count] = '\0';
	return (dest);
}
