#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int _printf(const char *format, ...);

typedef struct paramcs
{
	char *param;
	void (*cs)(char *);
} param_cs;

typedef struct paramdi
{
	char *param;
	void (*di)(int);
} param_di;

void print_digit(int);

void print_int(int);

void print_char(char *);

void print_str(char *);

void (*get_cs_func(char *s))(char *);

void (*get_di_func(char *s))(int);

#endif
