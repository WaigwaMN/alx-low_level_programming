#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - .
 * @nmemb: .
 * @size: .
 * Return: .
 */

void *_calloc(unsigned int nmemb, unsigned int size);

/**
 * _calloc - .
 * @nmemb: .
 * @size: .
 * Description: .
 * Return: .
 */

void *_calloc(unsigned int nmemb, unsigned int size)

{
	char *p;
	unsigned int index;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);

	if (p == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < nmemb * size; index++)
	{
		p[index] = 0;
	}

	return (p);
}
