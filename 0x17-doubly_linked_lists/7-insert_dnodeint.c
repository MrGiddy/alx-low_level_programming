#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts node at given index of a dlistint_t list
 * @h: Pointer to a pointer to the first node of a dlisint_t linked list
 * @idx: The position to insert new node
 * @n: Integer data for the new node
 * Return: A pointer to the inserted node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node_before, *node_after, *new_node;
	unsigned int i;

	if (idx == 0)
		return (add_dnodeint(h, n));

	/* Create new_node */
	new_node = create_new_node(n);

	/* Advance node_before */
	node_before = *h;
	for (i = 0; i < (idx - 1) && node_before != NULL; i++)
		node_before = node_before->next;

	if (node_before == NULL)
	{
		free(new_node); /* Index out of bounds */
		return (NULL);
	}

	/* Advance node_after */
	node_after = node_before->next;

	/* Insert new_node */
	node_before->next = new_node;
	new_node->prev = node_before;

	if (node_after != NULL)
	{
		new_node->next = node_after;
		node_after->prev = new_node;
	}
	else
	{
		new_node->next = NULL;
	}

	return (new_node);
}

/**
 * create_new_node - Creates a dlistint_t node
 * @n: An integer data for the new node
 * Return: A pointer to the new node created
 */
dlistint_t *create_new_node(int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	return (new_node);
}
