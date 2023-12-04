#include "main.h"
/**
 *_putchar_hex - Prints a hexadecimal number to stdout
 *@value: Integer value
 *@uppercase: 1 for uppercase letters, 0 for lowercase
 *
 *Return: Number of characters printed
 */
int _putchar_hex(unsigned int value, int uppercase)
{
	return (handle_base16(value, uppercase));
}
