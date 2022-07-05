#include "main.h"

/**
 * times_table - prints times table up to 9
 *
 * Return: void
 */
void times_table(void)
{
	int y, x, prod;

	prod = 0;

	for (y = 0; y <= 9; y++)
	{
		for (x = 0; x <= 9; x++)
		{
			prod = y * x;
			if (x != 0)
			{
				_putchar(44);
				_putchar(32);
			}
			if (prod >= 10)
			{
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
			else if ((prod < a0) && (x != 0))
			{
				_putchar(32);
				_putchar((prod % 10) + '0');
			}
			else
				_putchar((prod % 10 + '0');
		}
	}
}
