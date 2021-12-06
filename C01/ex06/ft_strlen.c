#include <stdio.h>

int		ft_strlen(char *str)
{
    int number = 0;


    while (*str)
    {
        str++;
        number++;
    }
    return number;
    
}

int		main(void)
{
	char str[] = "0123456789";
	char str1[] = "test";
    char str2[] = "";

	printf("10:%d\n", ft_strlen(str));
	printf("4:%d\n", ft_strlen(str1));
    printf("0:%d\n", ft_strlen(str2));
}