#include <stdio.h>
#include <stdlib.h>

typedef struct listint_t
{
int data;
struct listint_t *next;
}
listint_t;

listint_t *add_node(listint_t **head, int data)
{
listint_t *new_node, *current;

new_node = (listint_t *) malloc(sizeof(listint_t));
if (new_node == NULL)
{
return (NULL);
}

new_node->data = data;
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
}
else
{
current = *head;
while (current->next != NULL)
{
current = current->next;
}
current->next = new_node;
}
return (new_node);
}
