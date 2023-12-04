#include "main.h"
/**
 *_putchar_oct - Prints an octal number to stdout
 *@value: Integer value
 *
 *Return: Number of characters printed
 */
int _putchar_oct(unsigned int value)
{
	return (handle_base8(value));
}
