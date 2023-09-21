#include "lists.h"
/**
 *list_len - takes a list as an argument
 *@h: is a new node
 *Return: l size of node
*/

size_t list_len(const list_t *h)
{
size_t l = 0;
while (h)
{
l++;
h = h->next;
}
return (l);
}
