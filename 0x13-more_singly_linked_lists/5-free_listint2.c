#include "lists.h"
/**
 * free_listint2 - Frees a linked list of type listint_t.
 * @head: Double pointer to the head of the list.
 *
 * Description: This function frees each node in the linked list by
 *              traversing the list and freeing each node in turn.
 *              It also sets the head pointer to NULL.
 */
void free_listint2(listint_t **head)
{
listint_t *temp;

if (head == NULL)
return;

while (*head)
{
/* Save a pointer to the next node */
temp = (*head)->next;

/* Free the current node */
free(*head);

/* Move to the next node */
*head = temp;
}

/* Set the head pointer to NULL */
*head = NULL;
}

