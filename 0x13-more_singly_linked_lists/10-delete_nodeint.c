#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node in a linked list
 * @head: A pointer to the head of the list.
 * @index: The index of the node to delete.
 *
 * Return: 1 (Success) or -1 (Fail).
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp = *head;
listint_t *current = NULL;
unsigned int i = 0;

/* Check if the list is empty */
if (*head == NULL)
return (-1);
/* Delete the first node in the list */
if (index == 0)
{
*head = (*head)->next;
free(temp);
return (1);
}

/* Traverse the list until the desired index is reached */
while (i < index - 1)
{
if (!temp || !(temp->next))
return (-1);
temp = temp->next;
i++;
}

/* Delete the node at the desired index */
current = temp->next;
temp->next = current->next;
free(current);

return (1);
}
