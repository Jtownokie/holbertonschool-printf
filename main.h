#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

typedef struct param
{
	char *param;
	void (*cs)(char *);
	void (*di)(int);
} param_t;

void print_digit(int);

void print_int(int);

void print_char(char *);

void print_str(char *);

void (*get_func(char *s))(char *);

#endif
