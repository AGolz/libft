int	main(void)
{
	char buf[19]; 
	const char *str = "123456789056";
	size_t sz = 0;
	
	printf("строка: \"%s\"\n\n", str); 
	printf("буфер перед копированием: \"%s\"\n", buf);
	printf("%zu\n", ft_strlcat(buf, str, sizeof(buf)));
	sz = ft_strlcat(buf, str, sizeof(buf));
	printf("sz : %lu\n", sz);
	if (sz < ft_strlen(str))
		printf("обноружено усечение строки с %zu до %lu символов!\n", sz, ft_strlen(str));
	printf("буфер после копирования: \"%s\"\n", buf);
	return (0);
}
