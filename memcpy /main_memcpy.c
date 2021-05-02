int main (void)
{
	unsigned char src[10]="123456";
	unsigned char dst[10]="";

	ft_memcpy(dst, src, 6); 
	printf ("dst: %s\n",dst);
	return 0;
}