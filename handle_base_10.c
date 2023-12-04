#include "main.h"
/**
 *handle_base10 - Helper function to print base-10 numbers
 *@value: Integer value
 *
 *Return: Number of characters printed
 */
int handle_base10(int value)
{
	int count = 0;

	if (value / 10 != 0)
		count += handle_base10(value / 10);
	count += _putchar(value % 10 + '0');
	return (count);
}
