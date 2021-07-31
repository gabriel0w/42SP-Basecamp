/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbelo-so <gbelo-so@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 03:42:00 by gbelo-so          #+#    #+#             */
/*   Updated: 2021/07/31 03:42:01 by gbelo-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	c;
	int	c2;
	int	control;

	c = 0;
	c2 = 0;
	control = 0;
	if (*to_find == '\0')
		return (str);
	while (str[c] != '\0')
	{
		while (str[c] == to_find[c2] && str[c + 1] == to_find[c2 + 1])
		{
			if (to_find[c2 + 1] == '\0')
				return (str + control);
			c2++;
			c++;
		}
		c2 = 0;
		control++;
		c = control;
	}
	return (0);
}
