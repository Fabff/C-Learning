#include <stdio.h>
#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_putstr(char *str)
{
    int     i;

    i = 0;
    while (str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
    ft_putchar('\n');
}

int		main(void)
{
	char str[] = "0123456789";
	char str1[] = "test";

	printf("0123456789:\n");
	ft_putstr(str);
	printf("\n\ntest:\n");
	ft_putstr(str1);
}