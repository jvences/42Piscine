#include <stdio.h>

///// INSERT CODE HERE //////

int		main(void)
{
	char str1[] = "STRINGUPCASE";
	char str2[] = "stRinG Not UpCase!";

	printf("str1 is upcase? [1][TRUE] [0][FALSE]: %d\n", ft_str_is_uppercase(str1));
	printf("Str2 is upcase? [1][TRUE] [0][FALSE]:  %d\n", ft_str_is_uppercase(str2));
}
