#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list
 * @head: Pointer to pointer to the first node of dlistint_t list
 * @n: An integer - data for the node to add
 * Return: A pointer to the added node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *node1;

	node1 = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = node1;

	if (node1 != NULL)
	{
		node1->prev = new_node;
	}

	*head = new_node;

	return (new_node);
}
