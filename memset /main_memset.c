#include <string.h>
#include <stdio.h>

void	*ft_memset(void *buf, int ch, size_t count)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)buf;
	while (count--)
		*(ptr++) = (unsigned char)ch;
	return (buf);
}

int	main(void)
{
	 unsigned char	src[15] = "1234567890";
	
	 printf("src_1: %s\n", src);
	 ft_memset(src, '1', 25);
	 printf("src: %s\n", src);
	 return (0);
}

