int ft_str_is_numeric(char *str)
{
    unsigned int i;
    int numeric;

    numeric = 1;
    i = 0;
    while (str[i] != '\0')
    {
        if (!(str[i] >= 48 && str[i] <= 57))
        {   
            numeric = 0;
        }
        i++;
    }
    return numeric;
}

#include <stdio.h>
int		main()
{
	printf("%s\n%s\n%s\n%s\n%s\n%s\n",
			ft_str_is_numeric("")?"OK":"Fail",
			!ft_str_is_numeric("ABCDEFGHIJKLMNOPQRSTUVWXZabcdefghijklmnopqrstuvwxyz")?"OK":"Fail",
			ft_str_is_numeric("0123456789")?"OK":"Fail",
			!ft_str_is_numeric(" ")?"OK":"Fail",
			!ft_str_is_numeric("\\")?"OK":"Fail",
			!ft_str_is_numeric("\n")?"OK":"Fail");
}