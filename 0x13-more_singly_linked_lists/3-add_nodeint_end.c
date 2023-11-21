#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list
 * @head: A pointer to a pointer to a type listint_t
 * @n: An integer
 * Return: The address of the new element/node, NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr; /* A temporary pointer to traverse the list */
	listint_t *new_node;

	ptr = *head;
	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	/* If the list is empty */
	if (*head == NULL)
	{
		/* Make new_node the head */
		*head = new_node;
	}
	else
	{
		/* Traverse the list to find the last node */
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		/* Add new_node to the end of the list */
		ptr->next = new_node;
	}

	return (new_node);
}
