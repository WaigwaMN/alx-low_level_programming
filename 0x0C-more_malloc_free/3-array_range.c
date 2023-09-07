#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - .
 * @min: .
 * @max: .
 * Return: .
 */

int *array_range(int min, int max);

/**
 * array_range - .
 * @min: .
 * @max: .
 * Description: .
 * Return: .
 */

int *array_range(int min, int max)

{
	int index;
	int *p;
	int len;

	if (min > max)
	{
		return (NULL);
	}

	len = 0;

	for (index = min; index <= max; index++)
	{
		len++;
	}

	p = malloc(sizeof(int) * len);

	if (p == NULL)
	{
		return (NULL);
	}

	index = 0;

	while (min <= max)
	{
		p[index] = min;
		index++;
		min++;
	}
	return (p);
}
