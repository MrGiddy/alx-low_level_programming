#include "lists.h"

/**
 * free_listint - A function that frees a type listint_t list
 * @head: A pointer to the head node of a listint_t 
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	ptr = head;

	while (ptr->next != NULL)
	{
		free(ptr);
		ptr = ptr->next;
	}
	free(ptr);
}
