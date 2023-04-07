#include "lists.h"

/**
 * reverse_listint - Reverses a linked list.
 * @head: A pointer to the head of the list.
 *
 * Return: A pointer to the head of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL;
listint_t *next = NULL;

/* Reverse the list by modifying the pointers */
while (*head)
{
next = (*head)->next;
(*head)->next = prev;
prev = *head;
*head = next;
}

/* Set the head of the list to the last node */
*head = prev;

return (*head);
}
