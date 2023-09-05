#include "main.h"

/**
 * int _islower - checks for lowercase characters
 * @c: to be run
 * Return: c if lowercase otherwise 0
 */

int _islower(int c)
{
       if (c >= 'a' && c <= 'z')
	       return (1);
       else
	       return (0);
}
