#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - prints base 10 numbers
 * @void: empty parameter for main.
 *
 * Description: prints numbers 0-9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 48;

	while (num <= 57)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
