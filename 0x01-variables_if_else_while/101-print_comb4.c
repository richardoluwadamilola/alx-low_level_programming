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
	int i, j, k;

	for (i = '0'; 1 <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = '0'; k <='9'; k++)
			{
				if ((i < j) & (j < k) & (k <='9))
				{
					putchar(i);
					putchar(j);
					putchar(k);

					if ((i + j + k) < 168)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
