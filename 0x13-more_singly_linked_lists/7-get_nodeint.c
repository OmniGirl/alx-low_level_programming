#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head: pointer to the first node in the linked list
 * @index: index of the node to return
 *
 * Return: pointer to the node at the given index, or NULL if it doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int count = 0;  /* Initialize counter */
listint_t *temp = head;  /* Initialize temporary pointer */

while (temp != NULL)
{
if (count == index)
{  /* Check if we've reached the desired index */
return (temp);
}
count++;  /* Increment counter */
temp = temp->next;  /* Move to next node */
}
return (NULL);  /* Return NULL if desired index doesn't exist */
}
