#include "function_pointers.h"
/**
 * print_name - print_name
 * @name: name
 * @f: function pointer f
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
