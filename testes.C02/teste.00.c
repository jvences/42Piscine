#include <stdio.h>

// INSERT CODE HERE //

int		main(void)
{
	char src[15] = "String source!";
	char dest[15] = "String dest!";

	printf("String src before function: %s\n", src);
	printf("String dest before function: %s\n", dest);
	ft_strcpy(dest, src);
	printf("String src after function: %s\n", src);
	printf("String dest after function: %s\n", dest);
}
