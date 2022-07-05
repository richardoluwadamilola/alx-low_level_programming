#include "main.h"

/**
 * times_table - prints times table up to 9
 *
 * Return: void
 */
void times_table(void)
{
	int x, y, z;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			k = x * y;
			if (y == 0)
				_putchar(k + '0');
			if (y != 0 && k < 10)
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
				_putchar(k + '0');
			}
			else if (k >= 10)
			{
				_putchar(44);
				_putchar(32);
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
