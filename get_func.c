#include "main.h"

int (*get_func(const char *s))(va_list)
{
	param_t param[] = {
		{"c", print_char},
		{"s", print_str},
		{"d", print_int},
		{"i", print_int},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (param[i].param != NULL)
	{
		if (*(param[i].param) == *s)
		{
			return (param[i].func);
		}
		i++;
	}
	return (NULL);
}
