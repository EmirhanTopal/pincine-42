#include <unistd.h>

int main(int argc, char **argv)
{
	int j;
	int nw;
	int arr;
	int cm;
	char new_array[50];

	arr = 0;
	cm = 0;
	if (argc == 2)
	{
		j = 0;
		while (argv[1][j] != '\0')
		{
			j++;
		}
		int only_spaces = 1;
        int i = 0;
        while (i < j)
        {
            if (argv[1][i] != ' ')
            {
                only_spaces = 0;
                break;
            }
            i++;
        }
        if (only_spaces == 1)
        {
            write(1, "\n", 1);
        }
		else
		{
			nw = j - 1;
			while (argv[1][nw] != '\0')
			{
				if(argv[1][nw] == ' ')
				{	
					if (argv[1][nw + 1] != 32 && argv[1][nw + 1] != '\0')
						break;
					nw--;
				}
				else
				{
					new_array[arr] = argv[1][nw];
					nw--;
					arr++;
				}
		}
		}
		
		while (cm <= arr)
		{
			write(1, &new_array[arr], 1);
			arr--;
		}
	}
	else
		write(1, "\n", 1);
}