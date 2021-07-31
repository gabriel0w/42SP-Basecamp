int	is_lowercase(char *str)
{
	if (*str >= 97 && *str <= 122)
		return (1);
	return (0);
}

int	is_uppercase(char *str)
{
	if (*str >= 65 && *str <= 90)
		return (1);
	return (0);
}

int	is_numeric(char *str)
{
	if (*str >= 48 && *str <= 57)
		return (1);
	return (0);
}

int	adjust_the_word(char *str, int count_2)
{
	while (is_numeric(&str[1]) || is_lowercase(&str[1])
		|| is_uppercase(&str[1]))
	{
		if (is_uppercase(&str[1]))
			str[1] += 32;
		count_2++;
		str++;
	}
	return (count_2);
}

char	*ft_strcapitalize(char *str)
{
	int	count;
	int	count_2;

	count = 0;
	while (str[count] != '\0')
	{
		count_2 = count + 1;
		if (is_numeric(&str[count]))
			count_2 = adjust_the_word(&str[count], count_2);
		if (is_lowercase(&str[count]) || is_uppercase(&str[count]))
		{
			while (is_lowercase(&str[count_2]) || is_uppercase(&str[count_2])
				|| is_numeric(&str[count_2]))
			{
				if (is_uppercase(&str[count_2]))
					str[count_2] += 32;
				count_2++;
			}
		}
		if (is_lowercase(&str[count]))
			str[count] -= 32;
		count = count_2;
	}
	return (str);
}
