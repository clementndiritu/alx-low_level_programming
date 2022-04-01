#include <stdio.h>

/**
 * main - prints the number of argumentd passed into the function
 * @argc: the argument count
 * @argv: the argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
