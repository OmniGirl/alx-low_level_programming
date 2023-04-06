#include <stdlib.h>

typedef struct listint_t
{
int data;
struct listint_t *next;
}
listint_t;

void free_list(listint_t **head)
{
listint_t *current = *head;
while (current != NULL)
{
listint_t *next = current->next;
free(current);
current = next;
}
*head = NULL;
}

