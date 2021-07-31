/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbelo-so <gbelo-so@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 03:41:54 by gbelo-so          #+#    #+#             */
/*   Updated: 2021/07/31 03:41:55 by gbelo-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	count;
	unsigned int	count_2;

	count = 0;
	while (dest[count] != '\0')
	{
		count++;
	}
	count_2 = 0;
	while (src[count_2] != '\0' && count_2 < nb)
	{
		dest[count] = src[count_2];
		count++;
		count_2++;
	}
	dest[count] = '\0';
	return (dest);
}
