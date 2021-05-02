int	main(void)
{
	 unsigned char	src[15] = "1234567890";
	
	 printf("src_1: %s\n", src);
	 ft_memset(src, '1', 10);
	 printf("src: %s\n", src);
	 return (0);
}
