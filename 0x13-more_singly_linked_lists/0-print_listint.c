#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the nodes in a linked list
 * @h: pointer to the head of the linked list
 * Return: the number of nodes in the linked list
 */
size_t print_listint(const listint_t *h)
{
size_t node_count = 0;

while (h != NULL)
{
if (h->n == NULL)
{
return (1);
}
else
{
printf("%d\n", h->n);
}
node_count++;
h = h->next;
}
return (node_count);
}
