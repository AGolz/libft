#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void	*ft_memchr(const void *arr, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*str;

	str = (unsigned char *)arr;
	i = 0;
	while (i < n && str[i] != (unsigned char)c)
		i++;
	if (i == n)
		return (NULL);
	return ((void *)&str[i]);
}
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
