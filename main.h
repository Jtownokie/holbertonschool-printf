#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int _printf(const char *format, ...);

typedef struct paramcs
{
	char *param;
	int (*csfunc)(char *);
} param_cs;

typedef struct paramdi
{
	char *param;
	int (*difunc)(int);
} param_di;

int print_int(int);

int print_char(char *);

int print_str(char *);

int (*get_cs_func(char *s))(char *);

int (*get_di_func(char *s))(int);

int _putchar (char c);

#endif
