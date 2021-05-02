int main(void)
{
	char str[11] = "0123456789";
	int ch = 'k';
	char *ach;

	ach = ft_strchr(str, ch);
	if (ach == NULL)
		printf("символ в строке не найден\n");
	else 
		printf("Искомый символ в строке на позиции № %ld\n", ach-str+1);
	return (0);
}