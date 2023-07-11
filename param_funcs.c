#include "main.h"

int print_char(va_list c)
{
	_putchar((char)va_arg(c, int));
	return (1);
}

int print_str(va_list vastr)
{
	char *str = (char *)va_arg(vastr, char *);
	int i = 0;
	while(*str != '\0')
	{	
		_putchar(*str);
		i++;
	}
	return (i);
}

int print_int(va_list n)
{ 
	int i, j;
	int num = (int)va_arg(n, int);
	char buf[10];

	i = 0;
	j = 0;
	do {
		buf[i++] = (num % 10) + '0';
		num /= 10;
	} while (num > 0);
	
	for (; i >= 0; i--) 
	{
		_putchar(buf[i]);
		j++;
	}
	return (j);
}
