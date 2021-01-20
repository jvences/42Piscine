#include <stdio.h>
#include <string.h>

///// INSERT CODE HERE //////

int		main(void)
{
	char src[40] = "String source greater than dest!";
	char dest[] = "String dest!";

	printf("String SRC  before function: %s\n", src);
	printf("String DEST before function: %s\n", dest);
	printf("Tamanho string SRC before function: %lu\n", strlen(src));
	printf("Tamanho string DEST before function: %lu\n\n", strlen(dest));

	printf("Tamanho string SRC after function: %d\n", ft_strlcpy(dest, src, 20));
	printf("String DEST after function: %s\n", dest);
}

