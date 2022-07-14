#include "main.h"

/**
 * reverse_array - reverse contents of array
 * @a: array of ints
 * @n: size of array
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	i = 0;

	for (i = 0; i < n; i++;)
	{
		temp = a[n - 1];
		a[n - 1] = a[i];
		a[i] = temp;
		n--;
	}
}
