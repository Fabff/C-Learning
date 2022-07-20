#include <unistd.h>
#include <stdio.h>

int ft_str_is_lowercase(char c)
{
    return (c >='a' && c<='z');
}
int ft_str_is_uppercase(char c)
{
    return (c >='A' && c<='Z');
}
int ft_str_is_numeric(char c)
{
    return (c >='0' && c<='9');
}

char *ft_strcapitalize(char *str)
{
    int i = 0;

    while (str[i])
    {
        if (ft_str_is_uppercase(str[i]))
            str[i] += 32;
        i++;
    }
    if (ft_str_is_lowercase(str[0]))
        str[0] -= 32; 
    i = 1;
    while (str[i])
    {
        if (ft_str_is_numeric(str[i]))
            while(ft_str_is_numeric(str[i]))
                i++;
        if (!(ft_str_is_lowercase(str[i-1]) || ft_str_is_uppercase(str[i-1]) || ft_str_is_numeric(str[i-1])))
            if (ft_str_is_lowercase(str[i]))
                str[i] -= 32;
        i++;
    }
    return str;
}

void	ft_putstr(char *str)
{
	int l;

	l = 0;
	while (str[l])
	{
		l++;
	}
	write(1, str, l);
}

int		main()
{
	char c[] = "salut, coMMent tu vAs ? 42mOts quArAnTe-dEux; cinQuante+et+un";
	ft_putstr("Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un:");
	ft_putstr(ft_strcapitalize(c));
	ft_putstr(":");
	ft_putstr(c);
}