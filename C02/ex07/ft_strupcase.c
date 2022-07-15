#include <unistd.h>

char *ft_strupcase(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
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
	char c[] = "A!bCdEf G-Yz1;";
	ft_putstr("A!BCDEF G-YZ1;:");
	ft_putstr(ft_strupcase(c));
	ft_putstr(":");
	ft_putstr(c);
}