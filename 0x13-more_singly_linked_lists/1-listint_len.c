#include "lists.h"

/**
 * listint_len - Prints the elements of a listint_t list
 * @h: A pointer to a listint_t list
 * Return: the number of nodes present
 */
size_t listint_len(const listint_t *h)
{
	int count;
	const listint_t *ptr;

	ptr = h;
	count = 0;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}

	return (count);
}
