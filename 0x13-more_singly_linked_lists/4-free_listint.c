#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Frees a linked list of type listint_t.
 * @head: Pointer to the head of the list.
 *
 * Description: This function frees each node in the linked list by
 *              traversing the list and freeing each node in turn.
 */
void free_listint(listint_t *head)
{
listint_t *temp;
while (head)
{
/* Save a pointer to the next node */
temp = head->next;

/* Free the current node */
free(head);

/* Move to the next node */
head = temp;
}
}
