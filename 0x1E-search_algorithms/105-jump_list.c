#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted linked list using Jump Search algorithm
 * @list: Pointer to the head of the list to search
 * @size: Number of nodes in @list
 * @value: The value to search for
*/
listint_t *jump_list(listint_t *list, size_t size, int value)
{
    /* |list| -> |0|0| -> |1|1| -> |2|2| -> |3|3| -> |4|4| -> |5|5| -|6|6| -> |7|7| -> |8|8| -> |9|NULL| */
    /*            10        20       30     40       50         60      70      89       90        100   */
    listint_t *low, *high;
    low = list->index;
    high = list->index;
    /* Jump phase */
    /* Linear Search Phase */

}
