#include <stdio.h>

char	*ft_strcapitalize(char *str);
char	*ft_strlowcase(char *str);
char	is_it_alphanum(char c);

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if ((str[0] >= 'a') && (str[0] <= 'z'))
		{
			str[0] = str[0] - 32;
		}
		if ((str[i] >= 'a') && (str[i] <= 'z'))
		{
			if (is_it_alphanum(str[i - 1]) == 1)
			{
				str[i] = str[i] - 32;
			}
		}
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
		{
			str[i] = (str[i] + 32);
		}
		i++;
	}
	return (str);
}

char	is_it_alphanum(char c)
{
	if ((c >= '0') && (c <= '9'))
		return (2);
	else if ((c >= 'A') && (c <= 'Z'))
		return (0);
	else if ((c >= 'a') && (c <= 'z'))
		return (0);
	return (1);
}

int		main(void) 
{ 
    char str[] = "Salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("str before ft_strcapitalize:\n%s\n", str);
	ft_strcapitalize(str); 
	printf("str after ft_strcapitalize:\n%s\n", str); 
	return (0); 
}
