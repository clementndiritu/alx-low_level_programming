#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the sum of the argument only if they are digits
 * @argc: the argument count
 * @argv: the argument vector
 * Return: 0 if no error, 1 if invalid argument
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				return (printf("Error\n"), 1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
