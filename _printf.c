#include "main.h"

/**
 * _printf - formatted output conversion and print data.
 * @format: input string.
 *
 * Return: number of chars printed.
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				char c = va_arg(args, int);

				putchar(c);
				count++;
			}
			else if (*format == 's')
				char *s = va_arg(args, char *);
			while (*s)
			{
				putchar(*s);
				s++;
				count++;
			}
		} else if (*format == '%')
		{
			putchar('%');
			count++;
		}
	}
	else
	{
		putchar(*format);
		count++;
	}
	format++;
	va_end(args);
	return (count); }
}
