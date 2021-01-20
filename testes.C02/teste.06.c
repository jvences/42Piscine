#include <stdio.h>

int		ft_str_is_printable(char *str);
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 32 || str[i] > 126)
		{
		return (0);
		}
	}
	return (0);
}

#include <stdio.h>

int		ft_str_is_printable(char *str);
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 32 || str[i] > 126)
		{
		return (0);
		}
	}
	return (1);
}

int		main(void)
{
	char str1[] = "This string is printable!";
	char str2[] = "\0";

	printf("str1 is printable? [1][TRUE] [0][FALSE]: %d\n", ft_str_is_uppercase(str1));
	printf("Str2 is printable? [1][TRUE] [0][FALSE]:  %d\n", ft_str_is_uppercase(str2));

}
