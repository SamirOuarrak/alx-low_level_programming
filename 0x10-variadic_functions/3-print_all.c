#include "variadic_functions.h"
/**
 * Dispatcher - Dispatcher
 * @c: format
 * @ap : varg list
 *  Return: Always 0.
 */

int Dispatcher(char c, va_list ap)
{
	char *str;

	switch (c)
	{
		case 'i':
			printf("%d", va_arg(ap, int));
			break;
		case 'f':
			printf("%f", (float) va_arg(ap, double));
			break;
		case 'c':
			printf("%c", va_arg(ap, int));
			break;
		case 's':
			str = va_arg(ap, char *);
			if (str)
			{
				printf("%str", str);
				return (1);
			}
			printf("(nil)");
	}
	return (1);
}

/**
 * print_all - print_all
 * @format: format va_arg
 * @... : varg list
 *  Return: Always 0.
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0;
	unsigned int j;
	unsigned int isToSep = 0;
	const char arg[] = "cifs";

	va_start(ap, format);
	while (format && format[i])
	{
		j = 0;
		while (arg[j])
		{
			if (format[i] == arg[j++] && isToSep)
			{
				printf(", ");
				break;
			}
		}
		isToSep = Dispatcher(format[i++], ap);
	}
	printf("\n");
	va_end(ap);
}
