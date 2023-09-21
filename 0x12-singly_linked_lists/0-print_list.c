#include "lists.h"
/**
 * print_list - is the main function and takes one const parameter.
 * @h: is a node passed;
 * Return: (l);
*/
size_t print_list(const list_t *h)
{
size_t l = 0;
/*Should return number of nodes*/
while (h)
{
if (!h->str)
printf("[0] (nill)\n");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
l++;
}
return (l);
}
