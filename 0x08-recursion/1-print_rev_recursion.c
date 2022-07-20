#include "main.h"

/**
 * _print_rev_recursion - print string in reverse
 * @s: string to print
 * Return: Nothing
 */

void _print_rev_recursion(char *s)
{
	if (s[0] == '\0')
		return;

	if (s[1] != '\0')
	{
		_print_rev_recursion(&s[1]);
		_putchar(s[0]);
	}
	else
	{
		_putchar(s[0]);
	}
}
