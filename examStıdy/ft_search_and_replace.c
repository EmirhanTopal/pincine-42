#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	j = 0;
	
	if (argc == 4)
	{
		if(argv[2][j + 1] != '\0' && argv[3][j + 1] != '\0')
			return (0);
		while (argv[1][j] != '\0')
		{
			if(argv[1][j] == argv[2][0])
			{
				argv[1][j] = argv[3][0];
			}
			write(1, &argv[1][j], 1);
			j++;	
		}
	}
	else
		write(1, "\n", 1);
}