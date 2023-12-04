#include "main.h"
/**
 *_putstr - Writes a string to stdout
 *@str: String to write
 *
 *Return: Number of characters printed
 */
int _putstr(const char *str)
{
	int count = 0;

	while (*str)
	{
		count += _putchar(*str);
		str++;
	}
	return (count);
}
