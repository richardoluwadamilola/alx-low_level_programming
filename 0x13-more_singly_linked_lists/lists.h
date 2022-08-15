#ifndef _MORE_SINGLY_LINKED_LISTS
#define _MORE_SINGLY_LINKED_LISTS

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
*struct listint_s - singly linked list
*@n: integer
*@next: pointes to the next node
*Description: singly linked list node structure
*for ALX project
*/
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);

int _putchar(char c);
#endif
