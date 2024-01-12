#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes node at index index of dlistint_t list
 * @head: Pointer to pointer to the first node of a dlistint_t linked list
 * @index: The position of the node to delete
 * Return: 1 if success, -1 if failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i, count;

	/* If node to delete is the first */
	if (index == 0)
	{
		delete_first_node(head);
		return (1);
	}

	current = *head;

	/* Calculate length of list */
	for (count = 0; current->next != NULL; count++)
		current = current->next;

	/* If index is out of range */
	if (index > count - 1)
		return (-1);

	current = *head;

	/* Advance current to node at index */
	for (i = 0; i < index; i++)
		current = current->next;

	/* If node at index is the last node */
	if (current == NULL)
	{
		delete_last_node(head);
	}
	else
	{
		/* Connect previous and next nodes */
		current->prev->next = current->next;
		current->next->prev = current->prev;
		free(current);
	}

	return (1);
}

/**
 * delete_first_node - Deletes the first node of a dlistint_t linked list
 * @head: Pointer to a pointer to the first node of a dlistint_t linked list
 * Return: Nothing
 */
void delete_first_node(dlistint_t **head)
{
	dlistint_t *temp;

	/* If list is empty */
	if (*head == NULL)
		return;

	temp = *head;
	*head = (*head)->next;

	if (*head != NULL)
		(*head)->prev = NULL;

	free(temp);
	temp = NULL;
}

/**
 * delete_last_node - Deletes the last node of a dlistint_t linked list
 * @head: Pointer to a pointer to the first node of a dlistint_t linked list
 * Return: Nothing
 */
void delete_last_node(dlistint_t **head)
{
	dlistint_t *temp;

	/* If list is empty */
	if (*head == NULL)
		return;

	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	if (temp->prev != NULL)
	{
		temp->prev->next = NULL;
	}
	else
	{
		*head = NULL;
	}

	free(temp);
	temp = NULL;
}
