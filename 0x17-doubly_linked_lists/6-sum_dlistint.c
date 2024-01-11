#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all data(n) of a dlistint_t list
 * @head: Pointer to the first node of a dlistint_t linked list
 * Return: An integer - Sum of linked list elements
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int total_sum;

	current = head;

	total_sum = 0;
	while (current != NULL)
	{
		total_sum += current->n;
		current = current->next;
	}

	return (total_sum);
}
