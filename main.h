#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int handle_integer_specifiers(va_list args);
int _putchar_int(int value);
int _putchar_uint(unsigned int value);
int _putstr(const char *str);
int _putchar_hex(unsigned int value, int uppercase);
int _putchar_oct(unsigned int value);
int _putchar_ptr(void *addr);
int handle_base16(unsigned int value, int uppercase);
int handle_base8(unsigned int value);
int handle_base10(int value);
int _putchar_str_reverse(const char *str);

#endif
