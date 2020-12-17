#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] > s2[i]) ? (s1[i] - s2[i]) : -(s2[i] - s1[i]);
		}
		++i;
	}
	if (s1[i] != '\0')
	{
		return (s1[i]);
	}
	if (s2[i] != '\0')
	{
		return (-s2[i]);
	}
	return (0);
}

int	main(int x, char **str)
{
	int i;
	int j;
	int is_swapped;
	char *c;
	
	i = 1;
	while (i < x)
	{
		is_swapped = 0;
		j = 1;
		while (j < x - 1)
		{
			if (ft_strcmp(str[j], str[j + 1]) > 0)
			{
				c = str[j];
				str[j] = str[j + 1];
				str[j + 1] = c;
				is_swapped = 1;
			}
			++j;
		}
		if (!is_swapped)
		{
			break ;
		}
		++i;
	}

	i = 1;
	while (i < x)
	{
		j = 0;
		while (*(str[i] + j) != '\0')
		{
			write(1, str[i] + j, 1);
			++j;
		}
		write(1, "\n", 1);
		++i;
	}
}
