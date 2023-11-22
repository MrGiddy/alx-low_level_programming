#include "lists.h"

/**
 * free_listint - A function that frees a type listint_t list
 * @head: A pointer to the head node of a listint_t
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *ptr, *temp;

	/* Initialize ptr to the head of the list */
	ptr = head;

	/* Traverse the list and free each node */
	while (ptr->next != NULL)
	{
		/* Save the reference to the next node */
		temp = ptr->next;

		/* Free the current node */
		free(ptr);

		/* Move to the next node */
		ptr = temp;
	}
	free(ptr);
}
