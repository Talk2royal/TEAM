#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>

int _printf(const char *format, ...);
void print_char(va_list character);
int print_all_format(const char *string, va_list identifier);
void print_string(va_list string);
typedef struct type

{
	char select_type;
	void (*ptr_type)(va_list arg);
} type_t;

#endif
