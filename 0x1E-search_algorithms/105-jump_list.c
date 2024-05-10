#include "search_algos.h"
#include <math.h>
#include <stddef.h>
#include <stdio.h>

/**
 * jump_list - Searches for a value in a sorted linked list using
 * Jump Search algorithm
 * @list: Pointer to the head of the list to search
 * @size: Number of nodes in @list
 * @value: The value to search for
 *
 * Return: A pointer to the first node where value is located
*/
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *low, *high;
	int i;

	if (!list)
		return (NULL);

	/* Set low = pointer to first node */
	low = list;
	/* Set high = pointer to the first node */
	high = list;

	/* Jump Phase */
	while (1)
	{
		/* Set high to point to node at sqrt(size) initially */
		/* later advance high to point to last node of the next block */
		for (i = 0; i < sqrt(size) && high->next; i++)
			high = high->next;

		printf("Value checked at index [%ld] = [%d]\n", high->index, high->n);

		/* If value at high is less than target value */
		if (high->n < value && high->next)
		{
			low = high;
			continue;
		}
		else
			break;

		/* Here is reached if value is not in list */
		break;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", low->index, high->index);

	/* Linear Search Phase */
	while (low->next != NULL)
	{
		printf("Value checked at index [%ld] = [%d]\n", low->index, low->n);

		low = low->next;
		if (low->n == value)
		{
			printf("Value checked at index [%ld] = [%d]\n", low->index, low->n);
			return (low);
		}
	}

	printf("Value checked at index [%ld] = [%d]\n", low->index, low->n);

	/* Also reached when value is not in list */
	return (NULL);
}
