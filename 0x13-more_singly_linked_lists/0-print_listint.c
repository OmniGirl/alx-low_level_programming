#include <stdio.h>
#include <stdlib.h>

typedef struct listint_s
{
int n;
struct listint_s *next;
}
listint_t;
void print_listint(const listint_t *h)
{
const listint_t *current = h;
while (current != NULL)
{
printf("%d\n", current->n);
current = current->next;
}
}
