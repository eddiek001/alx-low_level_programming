#include "function_pointers.h"
/*
 * print_name - a function to print name
 * @f: variable to hold str
 * @name: name of the person
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
