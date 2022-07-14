#include "main.h"

/**
 * leet - encodes a string into 1337
 * @c: input string
 * Return: pointer to dest
 */
char *leet(char *c)
{
	int count = 0, i;

	int low_letters[] = {97, 101, 111, 116, 108};

	int upp_letters[] = {65, 69, 79, 84, 76};

	int numbers[] = {52, 51, 48, 55, 49};

	while (*(c + count) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(c + count) == low_letters[i] || *(c + count) == upp_letters[i])
			{
				*(c + count) = numbers[i];
				break;
			}
		}
		count++;
	}
	return (c);
}
