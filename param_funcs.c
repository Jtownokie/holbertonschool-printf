int print_char(char c)
{
	_putchar(c);
	return (1);
}

int print_str(char *str)
{
	int i = 0
	while(*str != NULL)
	{	
		_putchar(*str);
		i++
	}
	return (i);
}

int print_int(int n)
{ 
	int i, j;
	char buf[10];

	i = 0;
	j = 0;
	do {
		buf[i++] = (n % 10) + '0';
		n /= 10;
	} while (n > 0);
	
	for (; i >= 0; i--) 
	{
		_putchar(buf[i]);
		j++;
	}
	return (j);
}
