#include <stdio.h>

///// INSERT CODE HERE /////

int		main(void)
{
	char str[19] = "EU SOU UMA STRING!";

	printf("String before function: %s\n", str);
	printf("String after function: %s\n", ft_strlowcase(str));
}
