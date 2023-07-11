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
	int (*printptr)();

	va_start(varg, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'd' || format[i + 1] == 'i')
				printptr = get_func(format[i + 1]);
				ch_count += printptr(va_arg(varg, int));
				i += 2;
			if (format[i + 1] == 'c')
				printptr = get_func(format[i + 1]);
				ch_count += printptr(va_arg(varg, int));
				i += 2;
			if (format[i + 1] == 's')
				printptr = get_func(format[i + 1]);
				ch_count += printptr(va_arg(varg, char *));
				i += 2;
			if (format[i + 1] == '%')
				_putchar('%');
				i += 2;
		}
		else
		{
			_putchar(format[i]);
			i++;
			ch_count++;
		}
	}
	return (ch_count);

	va_end(varg);
}
