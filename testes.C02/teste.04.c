#include <stdio.h>

///// INSERT CODE HERE /////

int		main(void)
{
	char str1[] = "stringlowcase";
	char str2[] = "stRinG Not LowCase!";

	printf("str1 is lowcase? [1][TRUE] [0][FALSE]: %d\n", ft_str_is_lowercase(str1));
	printf("Str2 is lowcase? [1][TRUE] [0][FALSE]:  %d\n", ft_str_is_lowercase(str2));
}
