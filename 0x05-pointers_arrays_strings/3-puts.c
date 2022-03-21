#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line, to stdout
 * @str: string
 * Return: Always 0.
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar(10);
}
