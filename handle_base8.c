#include "main.h"
/**
 *handle_base8 - Helper function to print base-8 numbers (octal)
 *@value: Integer value
 *
 *Return: Number of characters printed
 */
int handle_base8(unsigned int value)
{
	int count = 0;

	if (value / 8 != 0)
		count += handle_base8(value / 8);
	count += _putchar(value % 8 + '0');
	return (count);
}
