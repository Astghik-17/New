#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	while (dest[i] != '\0')
	{
		++i;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		++j;
	}
	dest[i + j] = '\0';
	size = i + j - 1;
	return (size);
}

int main(){
	char dest[2] = "12";
	char src[3] = "345";
	printf("%s ", dest);
	printf("%d ", ft_strlcat(dest, src, 5));
	printf("%d\n", strlcat(dest, src, 5));
}
