
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*s1;
	const unsigned char	*s2;
	size_t				i;

	s1 = (unsigned char *)dst;
	s2 = (const unsigned char *)src;
	i = 0;
	if (!src && !dst)
		return (NULL);
	while (i < n)
	{
		if (dst > src)
			s1[n - i - 1] = s2[n - i - 1];
		else
			s1[i] = s1[i];
		i++;
	}
	return (dst);

int main(void)
{
	unsigned char src[10] = "1234567890";
	printf("src old: %s\n", src);
	ft_memmove(&src[4], &src[3], 3); 
	printf("src new: %s\n", src); 
	return (0); 
}