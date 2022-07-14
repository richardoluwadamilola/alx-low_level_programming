#include "main.h"

/**
 * _strncat - concatenates specified values from src to dest
 * @src: source
 * @dest: destination
 * @n: amount of bytes used from src
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
		i++;

	for (j = 0; j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}

	if (dest[i - 1] != '\0')
		dest[i] = '\0';

	return (dest);
}
