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
	int (*func)();
} param_t;

int print_int(int);

int print_char(char);

int print_str(char *);

int (*get_func(char *s))();

int _putchar(char c);

#endif
