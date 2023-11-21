#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list
 * @head: A pointer to a pointer to a listint_t
 * i.e. head stores the address of another pointer of type listint_t
 * @n: An integer
 * Return: The address of the new element, NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t **ptr;
	listint_t *new_node;

	ptr = head;

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *ptr;
	*head = new_node;

	return (*head);
}
