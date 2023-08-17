#include <stdio.h>

/**
 * main - the main function ofthe code
 *
 * Return: zero when succesful
 */

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
