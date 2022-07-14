#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string to compare
 * @s2: secondstring to compare
 * Return: 0 if s1 and s2 are equals
 * another number if not
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}

	if (si[i] == s2[i])
		return (0);
	return (s1[i] - s2[i]);
}
