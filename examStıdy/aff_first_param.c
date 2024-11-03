#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	int i;;
	int j;

	i = 0;
	if(1 < argc)
	{
		j = 0;
		while (argv[1][j] != '\0')
		{
			ft_putchar(argv[1][j]);
			j++;
		}
		i++;
	}
	else
		write(1, "\n", 1);
	return (0);	
}