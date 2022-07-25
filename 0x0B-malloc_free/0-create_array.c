#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create array of size and assign char c
 * @size: size of array
 * @c: char to assign
 * Return: pointer to array, Null if fail
 */
char *create_array(unsigned int size, char c)
{
	char *s;

	unsigned int i;

	if (size <= 0)
		return (NULL);

	s = (char *)malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;

	return (s);
}
