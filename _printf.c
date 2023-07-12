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
				ch_count++;
				i += 2;
			}
			else
			{
				printptr = get_func(&format[i + 1]);
				ch_count += printptr(varg);
				i += 2;
			}
		}
		else if (format[i] == '\n')
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
