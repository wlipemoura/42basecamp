char	*ft_strstr (char *str, char *to_find)
{
	int	counter;
	int	sub_counter;

	sub_counter = 0;
	counter = 0;
	if (to_find[sub_counter] == '\0')
		return (&str[counter]);
	while (str[counter])
	{
		sub_counter = 0;
		if (to_find[sub_counter] == str[counter])
		{
			while (to_find[sub_counter] && str[counter + sub_counter] == to_find[sub_counter])
				{
					sub_counter++;
					if (to_find[sub_counter] == '\0')
						return (&str[counter]);
				}
		}
		counter++;
	}
	return(0);
}
