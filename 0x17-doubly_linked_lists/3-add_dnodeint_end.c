#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list
 * @head: Pointer to a pointer to the first node of a dlistint_t list
 * @n: An integer - Data for the new node
 * Return: A pointer to the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current, *new_node;

	/* Create new_node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	current = *head;
	if (current == NULL)
	{
		/* if list is empty, make new_node the first node */
		*head = new_node;
	}
	else
	{
		/* Find the last node */
		while (current->next != NULL)
		{
			current = current->next;
		}

		/* Insert new_node after last node */
		current->next = new_node;
		new_node->prev = current;
	}

	return (new_node);
}
