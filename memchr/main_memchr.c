int	main(void)
{
	unsigned char src[15] = "1234567890";
	char *sym;
	printf("src old: %s\n", src);
	sym = ft_memchr(src, '4', 10);
	if (sym != NULL)
		sym[0] = '!';
	printf("src new: %s\n", src);
}
