#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int j;
	
	i = 1;
	j = 0;
	if (argc == 2) // 1 değilse 2 dir
	{
		while (argv[i][j] != '\0') // null a gelene kadar yaz
		{
			if(argv[1][j] == 'a') // a yı görürse 
			{
				write(1, "a", 1); // 
				break;
			}
			j++;
		}
		write(1, "\n", 1);
	}
	else // paramtere 1 e eşit değilse
	{
		write(1, "a\n", 2); // If the number of parameters is not
		//1, the program displays 'a' followed by a newline.
	}
	return (0);
}