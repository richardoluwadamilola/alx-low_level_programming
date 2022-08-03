#include "function_pointers.h"

/**
 * array_iterator - execute function on an array
 * @array: array to operate on
 * @size: size of array
 * @action: function to execute
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
