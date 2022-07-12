#include "main.h"

/**
 * puts2 - print alternating chars of string
 * @str: String
 * Return: void
 */
void puts2(char *str)
{
	int i, j;

	i = 0;
	j = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	while (j < i)
	{
		_putchar(str[j]);
		j += 2;
	}
	_putchar('\n');
}

