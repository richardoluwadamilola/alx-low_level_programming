#include "main.h"

/**
 * _isupper - a function that checks for uppercase
 * @c: character to be checked
 *
 * Return: 1 if c is capital, otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
