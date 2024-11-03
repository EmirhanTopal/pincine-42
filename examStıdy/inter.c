#include <unistd.h>


int main(int argc, char **argv)
{
	int i;
	int j;
	int k;
	int nw;
	int flag;

	i = 0;
	
	if (argc == 3)
	{
		j = 0;
		while (argv[1][j] != '\0')
		{
			k = 0;
			while (argv[2][k] != '\0')
			{
				if(argv[1][j] == argv[2][k])
				{
					nw = 0;
					flag = 1;
					while (nw < j)
					{
						if (argv[1][nw] == argv[1][j])
						{
							flag = 0;
							break;
						}
						nw++;
					}
					if(flag == 1)
					{
						write(1, &argv[1][j], 1);
					}
					break;
				}
				else
					k++;	
			}
			j++;
		}
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
}