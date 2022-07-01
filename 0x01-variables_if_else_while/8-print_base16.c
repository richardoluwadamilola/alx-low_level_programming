#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - prints base 16
 * @void: empty parameter list for main.
 *
 * Description: prints all hexadecimals
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

	num = 97;

	while (num <= 102)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
