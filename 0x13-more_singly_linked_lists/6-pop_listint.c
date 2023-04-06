#include <stdlib.h>

typedef struct listint_t 
{
int data;
struct listint_t *next;
}
listint_t;
int delete_head(listint_t **head) 
{
if (*head == NULL) 
{
return 0; // if the list is empty, return 0
}
listint_t* old_head = *head;
int data = old_head->data;
*head = old_head->next;
free(old_head);
return data;
}
