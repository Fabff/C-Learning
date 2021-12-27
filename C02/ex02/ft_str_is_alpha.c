#include <stdio.h>

int ft_str_is_alpha(char *str)
{
    int i;

    i = 0;
 while (str[i] != '\0')
	{
		if (!((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122)))
			return (0);
		i++;
	}
	return (1);
}




int		main()
{
	printf("%s\n%s\n%s\n%s\n%s\n%s\n",
			ft_str_is_alpha("")?"OK":"Fail",
			ft_str_is_alpha("ABCDEFGHIJKLMNOPQRSTUVWXZabcdefghijklmnopqrstuvwxyz")?"OK":"Fail",
			!ft_str_is_alpha("1")?"OK":"Fail",
			!ft_str_is_alpha("!")?"OK":"Fail",
			!ft_str_is_alpha("\\")?"OK":"Fail",
			!ft_str_is_alpha("\n")?"OK":"Fail");
}