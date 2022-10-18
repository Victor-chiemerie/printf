#include "main.h"

/**
 * _printf - prints a formatted data
 * @format: the identifier
 *
 * Return: the length of the printed string
 */
int _printf(const char * const format, ...)
{
	va_list argz;
	int i = 0, count = 0;
	int word_length = _strlen(format);

	va_start(argz, format);
	while ((format[i]) && (i < word_length))
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'b':
					count = count + binary_converter(va_arg(argz, int));
					break;
				case 'c':
					count = count + _putchar(va_arg(argz, int));
					break;
				case 's':
					count = count + _puts(va_arg(argz, char*));
					break;
				case 'i':
					count = count + print_number(va_arg(argz, int));
					break;
				case 'd':
					count = count + print_number(va_arg(argz, int));
					break;
				case '%':
					count = count + _putchar(format[i]);
					break;
				default:
					count = count + _putchar(format[i - 1]);
					count = count + _putchar(format[i]);
					break;
			}
			i++;
		}
		if (i < word_length)
		{
			count = count + _putchar(format[i]);
			i++;
		}
		else
			break;
	}
	va_end(argz);
	return (count);
}
