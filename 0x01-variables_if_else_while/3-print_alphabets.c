#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - prints alphabet
 * @void: empty parameter list for main.
 *
 * Description: print the alphabet in lower and upper case
 * can only use putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	letter = 'A';

	while (letter <= 'Z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
