#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node in a linked list.
 * @head: A pointer to the head of the list.
 * @idx: The index where the new node is added.
 * @n: The data to insert in the new node.
 *
 * Return: A pointer to the new node, or NULL if it fails.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *new_node;
listint_t *temp = *head;

/* Allocate memory for the new node */
new_node = malloc(sizeof(listint_t));
if (!new_node || !head)
return (NULL);

/* Initialize the new node */
new_node->n = n;
new_node->next = NULL;

/* Insert the new node at the beginning of the list */
if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}
/* Traverse the list until the desired index is reached */
for (i = 0; temp && i < idx; i++)
{
if (i == idx - 1)
{
/* Insert the new node */
new_node->next = temp->next;
temp->next = new_node;
return (new_node);
}
else
temp = temp->next;
}

/* Return NULL if the index is out of range */
return (NULL);
}
