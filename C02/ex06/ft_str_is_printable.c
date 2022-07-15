#include <stdio.h>
int ft_str_is_printable(char *str)
{
    int i = 0;

    while (str[i])
    {
        if (str[i] < 32 || str[i] == 127)
        {
            return 0;
        }
        i++;
    }
    return 1;
}



int		main()
{
	char	c;

	c = 1;
	while (c != 0)
	{
		if ((c < ' ' || c > '~') == ft_str_is_printable(&c))
		{
            printf("char = %c\n", c);
			printf("Fail for char in decimal: %d\n", (int)c);
			return (0);
		}
		c++;
	}

	printf("Success\n");
}