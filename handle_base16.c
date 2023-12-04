#include "main.h"
/**
 *handle_base16 - Helper function to print base-16 numbers (hexadecimal)
 *@value: Integer value
 *@uppercase: 1 for uppercase letters, 0 for lowercase
 *
 *Return: Number of characters printed
 */
int handle_base16(unsigned int value, int uppercase)
{
	int count = 0;
	int digit = 0;

	if (value / 16 != 0)
		count += handle_base16(value / 16, uppercase);
	digit = value % 16;
	if (digit < 10)
		count += _putchar(digit + '0');
	else
		count += _putchar(uppercase ? digit - 10 + 'A' : digit - 10 + 'a');
	return (count);
}

