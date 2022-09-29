#include "lists.h"
/**
 * free_dlistint - free a dlistint_t list.
 * @head: head of list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *kill;

	while (head)
	{
		kill = head;
		head = head->next;
		free(kill);
	}
}
