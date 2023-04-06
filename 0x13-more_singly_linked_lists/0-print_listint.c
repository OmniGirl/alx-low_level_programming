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
size_t num_nodes = 0;

while (h != NULL)
{
printf("%d\n", h->n);
num_nodes++;
h = h->next;
}
return (num_nodes);
}
