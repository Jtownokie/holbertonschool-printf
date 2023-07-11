#include "main.h"

/**
 * _printf - Copy of the printf function from standard library
 * @format: Format String passed to function
 *
 * Return: Total number of characters printed
 */

int _printf(const char *format, ...)
{
	int i = 0, ch_count = 0;
	va_list varg;
	int (*printptr)(va_list);

	va_start(varg, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				_putchar('%');
				i += 2;
			}
				printptr = get_func(&format[i]);
				ch_count += printptr(varg);
				i += 2;
		}
		if (format[i] == '\n')
		{
			_putchar('\n');
			i++;
			ch_count++;
		}
		else
		{
			_putchar(format[i]);
			i++;
			ch_count++;
		}
	}
	va_end(varg);

	return (ch_count);
}
