#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a linked dlistint_t list
 * @h: A pointer to the first node of a dlistint_t list
 * Return: Number of elements in the dlistint_t list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len;

	len = 0;
	while (h != NULL)
	{
		h = h->next;
		len++;
	}

	return (len);
}
