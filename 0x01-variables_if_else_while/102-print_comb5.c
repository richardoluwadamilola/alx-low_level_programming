#include <stdio.h>

/**
 * main - writes combinations of 00-99
 * @void: empty parameter list for main.
 *
 * Description: writes all unique combinations of 2
 * digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 48;
	int b = 48;
	int c = 48;
	int d = 49;

	while (a < 58)
	{
		while (b < 58)
		{
			while (c < 58)
			{
				while (d < 58)
				{
					putchar(a);
					putchar(b);
					putchar(32);
					putchar(c);
					putchar(d);
					if (!(a == 57  && b == 56 && c == 57 && d == 57))
					{
						putchar(44);
						putchar(32);
					}
					d++;
				}
				c++;
				d = 48;
			}
			b++;
			c = a;
			d = b + 1;
		}
		a++;
		b = 48;
		c = a;
		d = b + 1;
	}
	putchar(10);
	return (0);
}
