#include <stdio.h>

void tortoiseAndHare(void) __attribute__ ((constructor));

/**
 * tortoiseAndHare - print line before main
 * Return: Nothing
 */
void tortoiseAndHare(void)
{
	printf("You're beat! and yet, you must allow, \n");
