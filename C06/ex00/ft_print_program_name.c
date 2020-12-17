#include <unistd.h>

int main(int x, char** str)
{
	int i;

	i = 0;
	if (x >= 1)
	{
		while (*(str[0] + i) != '\0')
		{
			write(1, str[0] + i, 1);
			++i;
		}
		write(1, "\n", 1);
	}
}
