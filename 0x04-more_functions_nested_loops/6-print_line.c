#include "main.h"

/**
 * print_line - print a line
 * @n: lemgth of line
 * Return: Nothng
 */
void print_line(int n)
{
	while (n >= 1)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
