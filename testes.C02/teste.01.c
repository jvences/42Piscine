#include <stdio.h>
#include <string.h>

///// INSERT CODE HERE /////

int		main(void)
{
	char src[15] = "String source!";
	char dest[] = "String dest greater than src!";

	printf("String SRC  before function: %s\n", src);
	printf("String DEST before function: %s\n", dest);
	printf("Tamanho string SRC before function: %lu\n", strlen(src));
	printf("Tamanho string DEST before function: %lu\n\n", strlen(dest));

	ft_strncpy(dest, src, 18);
	printf("Tamanho string DEST after function: %lu\n", strlen(dest));
	printf("String DEST after function: %s\n", dest);
}
