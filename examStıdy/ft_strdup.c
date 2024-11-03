#include <stdlib.h>

char *ft_strdup(char *src)
{
	int i;
	int j;
	char *dest;

	i = 0;
	j = 0;
	
	while (src[j] != '\0')
	{
		j++;
	}
	dest = (char *) malloc(j * sizeof(char) + 1);
	if (dest == NULL)
	{
		return (0);
	}
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
#include <stdio.h>

int main()
{
	char arr[] = "";
	printf("%s", ft_strdup(arr));
	return (0);
}