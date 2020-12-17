char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		if (str[i] == to_find[j] || to_find[0] == '\0')
		{
			while (to_find[j] != '\0' && str[i + j] != '\0' && to_find[j] == str[i + j])
			{
				++j;
			}
			if (to_find[j] == '\0')
			{
				return str + i;
			}
		}
		++i;
	}
	return (0);
}
