## 0x17. C - Doubly linked lists

### 0-print_dlistint.c

Write a function that prints all the elements of a dlistint_t list.

* Prototype: size_t print_dlistint(const dlistint_t *h);
* Return: the number of nodes
* Format: see example

```C
julien@ubuntu:~/0x17. Doubly linked lists$ cat 0-main.c 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;
    dlistint_t *new;
    dlistint_t hello = {8, NULL, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
    {
        dprintf(2, "Error: Can't malloc\n");
        return (EXIT_FAILURE);
    }
    new->n = 9;
    head->prev = new;
    new->next = head;
    new->prev = NULL;
    head = new;
    n = print_dlistint(head);
    printf("-> %lu elements\n", n);
    free(new);
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_dlistint.c -o a
julien@ubuntu:~/0x17. Doubly linked lists$ ./a 
9
8
-> 2 elements
julien@ubuntu:~/0x17. Doubly linked lists$ 
```
### 1-dlistint_len.c

Write a function that returns the number of elements in a linked dlistint_t list.

* Prototype: size_t dlistint_len(const dlistint_t *h);

### 2-add_dnodeint.c

Write a function that adds a new node at the beginning of a dlistint_t list.

* Prototype: dlistint_t *add_dnodeint(dlistint_t **head, const int n);
* Return: the address of the new element, or NULL if it failed

### 3-add_dnodeint_end.c

Write a function that adds a new node at the end of a dlistint_t list.

* Prototype: dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
* Return: the address of the new element, or NULL if it failed

### 4-free_dlistint.c

Write a function that frees a dlistint_t list.

* Prototype: void free_dlistint(dlistint_t *head);

### 5-get_dnodeint.c

Write a function that returns the nth node of a dlistint_t linked list.

* Prototype: dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
* where index is the index of the node, starting from 0
* if the node does not exist, return NULL

### 6-sum_dlistint.c

Write a function that returns the sum of all the data (n) of a dlistint_t linked list.

* Prototype: int sum_dlistint(dlistint_t *head);
* if the list is empty, return 0
