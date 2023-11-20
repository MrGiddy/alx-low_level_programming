#include "lists.h"

/**
 * print_listint - Prints the elements of a listint_t list
 * @h: A pointer to a listint_t list
 * Return: the number of nodes present
 */
size_t print_listint(const listint_t *h)
{
	int count;
	const listint_t *ptr;

	ptr = h;
	count = 0;
	while (ptr != NULL)
	{
		count++;
		printf("%d\n", ptr -> n);
		ptr = ptr -> next;
	}

	return (count);
}
