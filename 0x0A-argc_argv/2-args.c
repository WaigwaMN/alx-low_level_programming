#include <stdio.h>

/**
 * main - main function
 * @argc: argument
 * @argv: argument
 * Return: 0 when succesful
 */

int main(int argc, char *argv[])

{
	int i;

	for (i = 0 ; i < argc ; i++)
		printf("%s\n", argv[i]);
	return (0);
}
