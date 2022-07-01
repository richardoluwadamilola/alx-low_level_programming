#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - prints alphabet
 * @void: empty parameter list form main.
 *
 * Description: prints the alphabet in lowercase
 * skip q and e
 * can only use putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter == 'q')
		{
			letter++;
		}
		else if (letter == 'e')
		{
			letter++;
		}
		else
		{
			putchar(letter);
			letter++;
		}
	}
	putchar('\n');
	return (0);
}
