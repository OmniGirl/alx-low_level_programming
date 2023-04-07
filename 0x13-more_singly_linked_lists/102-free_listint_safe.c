#include "lists.h"

/**
 * free_listint_safe - This frees a linked list
 * @h:This is a pointer to the first node in the linked list
 * Return: The number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
size_t len = 0;
listint_t *cur, *next;

if (!h)
return (0);

while (*h)
{
cur = *h;
next = cur->next;

/* Check if the next node has already been visited */
if (next && next <= cur)
{
/* The list contains a cycle */
*h = NULL;
len++;
break;
}

/* Free the current node */
free(cur);
*h = next;
len++;
}
return (len);
}
