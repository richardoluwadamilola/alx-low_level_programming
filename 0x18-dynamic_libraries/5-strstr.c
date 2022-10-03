#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring
 * @haystack: entire string
 * @needle: substring
 * Return: pointer to the first instance or
 * Null if substring not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *bhaystack;
	char *pneedle;

	while (*haystack != '\0')
	{
		bhaystack = haystack;
		pneedle = needle;

	while (*haystack != '\0' && *pneedle != '\0' && *haystack == *pneedle)
	{
		haystack++;
		pneedle++;
	}

	if (!*pneedle)
		return (bhaystack);
	haystack = bhaystack + 1;
	}
	return (0);
}
