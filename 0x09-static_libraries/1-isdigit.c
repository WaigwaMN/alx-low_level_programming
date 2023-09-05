#include "main.h"

/**
 * _isdigit - declaration of function
 * Description: digit testing
 * @c: value to check
 * Return: 1 if true 0 if false
 */

int _isdigit(int c);

/**
 * _isdigit - definition of function
 * Description: test if c is a digit
 * @c: value to test
 * Return: 1 if true 0 if false
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
