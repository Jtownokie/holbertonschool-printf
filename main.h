#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int _printf(const char *format, ...);

typedef struct paramcs
{
	char *param;
	void (*csfunc)(char *);
} param_cs;

typedef struct paramdi
{
	char *param;
	void (*difunc)(int);
} param_di;

void print_digit(int);

void print_int(int);

void print_char(char *);

void print_str(char *);

int (*get_cs_func(char *s))(char *);

int (*get_di_func(char *s))(int);

#endif
