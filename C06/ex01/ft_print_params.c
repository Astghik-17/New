#include <unistd.h>

int main(int x, char** str)
{
	int i;
	int j;

	i = 1;
	if (x > 1){
		while (str[i])
		{
			j = 0;
			while (*(str[i] + j) != '\0')
			{
				write(1, (str[i] + j), 1);
				++j;
			}
			write(1, "\n", 1);
			++i;
		}
	}
}
