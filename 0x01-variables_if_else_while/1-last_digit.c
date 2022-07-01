#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - the last digit
 * @void: empty parameter list for main.
 *
 * Description: print last digit of random number to tell if it is > 5 of < 6.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	printf("Last digit of %d is %d ", n, (n % 10));

	if ((n % 10) > 5)
	{
		printf(("and is greater than 5\n");
	}
	else if ((n % 10) == 0)
	{
		printf("and is 0\n");
	}
	else
	{
		printf(("and is less than 6 and not 0\n");
	}

	return (0);
}
