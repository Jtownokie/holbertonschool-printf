#include "main.h"

/**
 * print_char - Function that prints a char
 * @c: Variable argument
 *
 * Return: Num of chars printed
 */
int print_char(va_list c)
{
	_putchar((char)va_arg(c, int));

	return (1);
}

/**
 * print_str - Function that prints a str
 * @vastr: Variable argument
 *
 * Return: Num of chars printed
 */
int print_str(va_list vastr)
{
	char *str = va_arg(vastr, char *);
	int i = 0;

	if (*str == '\0')
	{
		str = "(null)";
	}

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}

/**
 * print_int - Function that prints a int
 * @n: Variable argument
 *
 * Return: Num of chars printed
 */
int print_int(va_list n)
{
	int i, j;
	int num = va_arg(n, int);
	char buf[10];

	i = 0;
	j = 0;
	do {
		buf[i] = (num % 10) + '0';
		num /= 10;
		i++;
	} while (num > 0);

	for (; i >= 0; i--)
	{
		_putchar(buf[i]);
		j++;
	}

	return (j);
}
