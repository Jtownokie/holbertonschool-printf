#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int _printf(const char *format, ...);

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
