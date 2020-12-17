int	ft_atoi(char *str)
{
	int changed;
	int num;
	int i;
	int sign;
	int j;

	changed = 0;
	i = 0;
	num = 0;
	sign = 1;
	while (str[i] != '\0')
	{
		if ((str[i] == ' ' && changed == 0) || (str[i] == '+'))
		{
			++i;
			continue ;
		}
		if (str[i] == '-')
		{
			++i;
			changed = 1;
			sign *= -1;
			continue ;
		}
		if (str[i] > '0' && str[i] < '9')
		{
			j = i;
			while (str[j] > '0' && str[j] < '9')
			{
				num = num * 10 + (str[j] - '0');
				++j;
			}
			break ;
		}
		++i;
	}
	return num * sign;
}
