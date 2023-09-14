#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - main function
 * @name: function art
 * @f: character
 */

void print_name(char *name, void (*f)(char *))

{
	if (name != NULL && f != NULL)
		f(name);
}
