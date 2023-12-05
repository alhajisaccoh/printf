#include "main.h"
int _printf(const char *format, ...);
/**
 *_printf - custom printf function
 *@format: Format string
 *Return: Number of characters printed (excluding NULL byte)
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;

			switch (*format)
			{
				case 'c':
					count += _putchar(va_arg(args, int));
					break;
				case 's':
					count += _putstr(va_arg(args, char *));
					break;
				case 'd':
				case 'i':
					count += handle_integer_specifiers(args);
					break;
				case 'u':
					count += _putchar_uint(va_arg(args, unsigned int));
					break;
				case 'x':
					count += _putchar_hex(va_arg(args, unsigned int), 0);
					break;
				case 'X':
					count += _putchar_hex(va_arg(args, unsigned int), 1);
					break;
				case 'o':
					count += _putchar_oct(va_arg(args, unsigned int));
					break;
				case 'p':
					count += _putchar_ptr(va_arg(args, void *));
					break;
				case 'r':
					count += _putstr(va_arg(args, char *));
					break;
				default:
					count +=  _putchar(*format);
					break;
			}
		}
		else
		{
			count += _putchar(*format);
		}
		format++;
	}
	va_end(args);

	return (count);
}
