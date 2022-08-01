#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a dog
 * @d: dog to print
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == 0)
		return;
