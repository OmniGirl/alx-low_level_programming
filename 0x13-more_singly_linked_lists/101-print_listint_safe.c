#include "lists.h"
#include <stdio.h>

/**
 * get_loop_length - Calculates the length of a loop in a linked list.
 * @node: A pointer to a node inside the loop.
 *
 * Return: The length of the loop.
 */
size_t get_loop_length(const listint_t *node)
{
const listint_t *ptr = node->next;
size_t len = 1;

while (ptr != node)
{
ptr = ptr->next;
len++;
}

return (len);
}

/**
 * print_listint_safe - Safely prints a linked list of integers.
 * @head: A pointer to the first node of the linked list.
 *
 * Return: The number of nodes in the linked list.
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *slow, *fast;
size_t count = 0, loop_len = 0;

if (head == NULL)
return (0);

slow = head;
fast = head;

while (fast != NULL && fast->next != NULL)
{
slow = slow->next;
fast = fast->next->next;

if (slow == fast)
{
loop_len = get_loop_length(slow);
break;
}
}

if (loop_len == 0)
{
while (head != NULL)
{
printf("[%p] %d\n", (void *)head, head->n);
count++;
head = head->next;
}
}
else
{
do {
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
count++;
} while (count < loop_len);

printf("[%p] %d\n", (void *)head, head->n);
count++;

while (count < loop_len * 2)
{
head = head->next;
printf("[%p] %d\n", (void *)head, head->n);
count++;
}
printf("-> [%p] %d\n", (void *)head->next, head->next->n);
}

return (count);
}
