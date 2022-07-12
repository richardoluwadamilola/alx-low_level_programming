#include "main.h"

/**
 * swap_int - swap the values of two intergers
 * @a: first value
 * @b: second value
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
