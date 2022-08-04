#include "variadic_functions.h"

/**
 * sum_them_all - sum all parameters
 * @n: number of parameters
 * Return: aum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
