#include "main.h"

/**
 * print_numbers - prints numbers 0 - 9
 *
 * Return: Nothing
 */
void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
		_putchar(i);
	_putchar('\n');
}
