#include "main.h"
/**
 *handle_integer_specifiers - Handles integer specifiers (d and i)
 *@args: Variable argument list
 *
 *Return: Number of characters printed
 */
int handle_integer_specifiers(va_list args)
{
	int value = 0;

	value = va_arg(args, int);
	return (_putchar_int(value));
}
