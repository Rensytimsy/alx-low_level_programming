#include "lists.h"
/**
 *print_listint - main function takes one parameter
 *@h: is a new node with a value.
 *Return: values present in the nodes.
*/
size_t print_listint(const listint_t *h)
{
size_t n = 0;
while (h)
{
printf("%d\n", h->n);
n++;
h = h->next;
}
return (n);
}
