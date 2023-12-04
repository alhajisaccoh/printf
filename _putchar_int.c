#include "main.h"
/**
 *_putchar_int - Prints an integer to stdout
 *@value: Integer value
 *
 *Return: Number of characters printed
 */
int _putchar_int(int value)
{
	int count = 0;

	if (value < 0)
	{
		count += _putchar('-');
		value = -value;
	}
	count += handle_base10(value);
	return (count);
}
