#include <stdio.h>

/**
 * main - writes 001 - 999
 * @void: empty parameter list for main.
 *
 * Description: writes all unique combinations
 * of 3 numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48;
	int j = 49;
	int k = 50;

	while (i < 57)
	{
		while (j < 58)
		{
			while (k < 58)
			{
				putchar(i);
				putchar(j);
				putchar(k);

				if (!(i == 55 && j == 56 && k == 57))
				{
					putchar(44);
					putchar(32);
				}
				k++;
			}
			j++;
			k = j + 1;
		}
		i++;
		j = i;
	}
	putchar('\n');
	return (0);
}
