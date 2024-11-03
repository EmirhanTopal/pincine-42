#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	j = 0;

	if(argc == 2)
	{
		while (argv[1][j] == 32)
		{
			j++;
		}
		if(argv[i][j] == '\0')
			write(1, "\n", 1);
		else
		{
			while (argv[1][j] != 32)
			{
				write(1, &argv[1][j], 1);
				j++;
			}
			write(1, "\n", 1);
		}
		
	}
	else
		write(1, "\n", 1);
}