#include "lists.h"
/**
 * pop_listint - Deletes the head node of a linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: Data inside the element was deleted, or 0 if list is empty.
 *
 * Description: This function deletes the head node of a linked list
 *              by freeing the head node and setting the head pointer
 *              to point to the next node in the list.
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int num;

/* If head is NULL or the list is empty, return 0 */
if (!head || !*head)
return (0);

/* Save the data in the head node */
num = (*head)->n;

/* Save a pointer to the next node */
temp = (*head)->next;

/* Free the head node */
free(*head);

/* Set the head pointer to the next node */
*head = temp;

/* Return the data from the head node */
return (num);
}
