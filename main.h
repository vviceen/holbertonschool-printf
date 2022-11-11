#ifndef main_h
#define main_h

/* LIBRARIES */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/* PROTOTYPES */

typedef struct formats
{
	char c;
	int (*f)(va_list args);
} format_t;

int _putchar(char c);

int _printf(const char *format, ...);

int (*get_format(const char *s))(va_list);

int print_char(va_list args);

int print_str(va_list args);

int print_int(va_list args);

#endif
