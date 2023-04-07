#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *slow = head;
listint_t *fast = head;

while (fast && fast->next)
{
slow = slow->next;
fast = fast->next->next;

/* If there's a cycle, find the start of the cycle */
if (slow == fast)
{
listint_t *ptr1 = head;
listint_t *ptr2 = slow;
while (ptr1 != ptr2)
{
ptr1 = ptr1->next;
ptr2 = ptr2->next;
}
return (ptr1);
}
}
return (NULL);
}
