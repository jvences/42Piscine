#include <stdio.h>

///// INSERT CODE HERE /////


int		main(void)
{
	char str[19] = "Eu sou uma string!";

	printf("String before function: %s\n", str);
	printf("String after function: %s\n", ft_strupcase(str));
}
