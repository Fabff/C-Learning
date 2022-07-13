 #include <stdio.h>

int ft_strlen(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}


int		main(void)
{
	char str[] = "0123456789";
	char str1[] = "test";

	printf("10:%d\n", ft_strlen(str));
	printf("4:%d\n", ft_strlen(str1));
}