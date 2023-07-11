#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int _printf(const char *format, ...);

/**
 * struct param - Struct that stores a char and a function pointer
 * @param: Character to match
 * @func: Function pointer to print function
 *
 * Description: This struct stores a character and a function pointer
 */
typedef struct param
{
	char *param;
	int (*func)(va_list);
} param_t;


int print_int(va_list n);

int print_char(va_list c);

int print_str(va_list str);

int (*get_func(const char *s))(va_list);

int _putchar(char c);

#endif
