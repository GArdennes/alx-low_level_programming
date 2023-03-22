#include "function_pointers.h"

/**
 * print_name - function that prints name
 * @name: String to check
 * @f: function pointer to check
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;

	f(name);
}
