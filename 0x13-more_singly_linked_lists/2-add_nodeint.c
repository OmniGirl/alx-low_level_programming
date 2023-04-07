#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to a pointer to the first node in the list
 * @h: integer value to insert in the new node
 *
 * Return: the address of the new element, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int h)
{
listint_t *new_node = malloc(sizeof(listint_t));
if (!new_node)
return (NULL);
new_node->n = h;
new_node->next = *head;
*head = new_node;
return (new_node);
}
