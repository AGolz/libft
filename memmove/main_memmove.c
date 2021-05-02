
int main(void)
{
	unsigned char src[10] = "1234567890";
	printf("src old: %s\n", src);
	ft_memmove(&src[4], &src[3], 3); 
	printf("src new: %s\n", src); 
	return (0); 
}