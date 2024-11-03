

int ft_atoi(const char *str)
{
	
	int i;
	int flag;
	int result;
	
	i = 0;
	flag = 1;
	result = 0;

	while ((str[i] <= 'z' && str[i] >= 'a') || str[i] >= 90 && str[i] <= 122)
	{
		i++;
	}
	while((str[i] <= 13 && str[i] >= 9) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if(str[i] == '-')
			flag *= -flag;
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result * flag);
}

#include <stdio.h>
int main()
{
	char arr[] = "sdfsfsdf4324234dfgdfg";
	printf("%d", ft_atoi(arr));
}
