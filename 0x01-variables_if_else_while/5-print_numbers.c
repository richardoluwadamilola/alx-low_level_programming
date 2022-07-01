#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - prints base 10 numbers
 * @void: empty parameter list for main.
 *
 * Description: prints numbers 0-9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
