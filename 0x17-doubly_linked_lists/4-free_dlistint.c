#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list
 * @head: Pointer to the first node of a dlistint_t list
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *next_node;

	current = head;

	/* If list is empty */
	if (current == NULL)
		return;

	/* Traverse list */
	while (current->next != NULL)
	{
		/* Store next node before freeing current*/
		next_node = current->next;
		free(current);

		/* Set current to next node */
		current = next_node;
	}
	/* Free last node */
	free(current);
}
