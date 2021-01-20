int		main(void)
{
	char str1[] = "This string is printable!";
	char str2[] = "\x1\x5\xa\x15";

	printf("str1 is printable? [1][TRUE] [0][FALSE]: %d\n", ft_str_is_printable(str1));
	printf("Str2 is printable? [1][TRUE] [0][FALSE]:  %d\n", ft_str_is_printable(str2));

}
