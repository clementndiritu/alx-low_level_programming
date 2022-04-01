#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two arguments
 * @argc: the argument count
 * @argv: the argument vector
 * Return: 0 - i it receives just two arguments and -1 if it does not
 */

int main(int argc, char *argv[])
{
	int total = 1, i;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			total *= atoi(argv[i]);
		}
		printf("%d\n", total);
		return (0);
	}
	printf("Error\n");
	return (1);
}
