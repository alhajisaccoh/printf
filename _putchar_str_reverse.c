#include "main.h"
/**
 *_putchar_str_reverse - Prints a string in reverse to stdout
 *@str: String to write
 *
 *Return: Number of characters printed
 */
int _putchar_str_reverse(const char *str)
{
	int count = 0;
	int length = 0;
	int i;

	while (str[length] != '\0')
		length++;
	for (i = length - 1; i >= 0; i--)
	{
		count += _putchar(str[i]);
	}
	return (count);
}
