#include <stdio.h>

/**
 * main - main function of the code
 *
 * Return: zero when succesful
 */

int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
