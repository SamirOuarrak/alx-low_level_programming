#include "variadic_functions.h"

/**
 * print_all - print_all
 * @format: format va_arg
 * @... : varg list
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *str;
	char *isToSep;

	va_start(ap, format);
	isToSep = "";
	while (format && format[i])
	{
		switch (format[i++])
		{
			case 'f':
				printf("%s%f", isToSep, va_arg(ap, double));
				break;
			case 'i':
				printf("%s%d", isToSep, va_arg(ap, int));
				break;
			case 'c':
				printf("%s%c", isToSep, va_arg(ap, int));
				break;
			case 's':
				str = va_arg(ap, char *);
				if (str)
				{
					printf("%s%s", isToSep, str);
					break;
				}
				printf("%s(nil)", isToSep);
				break;
			default:
				continue;
		}
		isToSep = ", ";
	}
	printf("\n");
	va_end(ap);
}
