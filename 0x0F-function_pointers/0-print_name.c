#include "function_pointers.h"

/**
 * print_name - function to print a name
 *
 * @name: pointer to a string name
 * @f: pointer to a function pointer
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		(*f)(name);
	}
}
