#include "lists.h"
/**
 * add_dnodeint - a function that adds a new node at
 * the beginning of a dlistint_t list.
 * @head: pointer to the head node
 * @n: number of nodes
 * Return: the address of the new element, or NULL if it fail
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t)):

		if (!new_node)
		{
			return (NULL);
		}
