#include "lists.h"
/**
 * print_list - is the main function and takes one const parameter.
 * @h: is a node passed;
 * Return: (l);
*/
size_t print_list(const list_t *h)
{
size_t s = 0;
while (h)
{
if (!h->str)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
s++;
}
return (s);
}
