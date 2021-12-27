int ft_str_is_lowercase(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        if (!(str[i] >= 97 && str[i] <= 122))
            return 0;
        i++;
    }
    return 1;
}

#include <stdio.h>

int		main()
{
	printf("%s\n%s\n%s\n%s\n%s\n%s\n%s\n",
			ft_str_is_lowercase("")?"OK":"Fail",
			ft_str_is_lowercase("abcdefghijklmnopqrstuvwxyz")?"OK":"Fail",
			!ft_str_is_lowercase("ABCDEFGHIJKLMNOPQRSTUVWXZabcdefghijklmnopqrstuvwxyz")?"OK":"Fail",
			!ft_str_is_lowercase("0123456789")?"OK":"Fail",
			!ft_str_is_lowercase(" ")?"OK":"Fail",
			!ft_str_is_lowercase("\\")?"OK":"Fail",
			!ft_str_is_lowercase("\n")?"OK":"Fail");
}