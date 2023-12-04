#include "main.h"
/**
 *_putchar_ptr - Prints a pointer address to stdout
 *@addr: Pointer address
 *
 *Return: Number of characters printed
 */
int _putchar_ptr(void *addr)
{
	return (handle_base16((unsigned long)addr, 0));
}

