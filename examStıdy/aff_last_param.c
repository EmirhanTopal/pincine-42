#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int j;

	i = argc - 1;

	if (argc > 1)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			j++;
		}
	}
	else
		write(1, "\n", 1);
	return(0);
}