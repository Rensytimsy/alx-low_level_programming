#include "lists.h"
/**
 *delete_nodeint_at_index - func takes two arguments head and index
 *@head: is a pointer
 *@index: is an int value
 *Return: (-1) error
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *node;
unsigned int pos;
pos = 0;
while (*head)
{
if (pos == index)
{
node = (*head);
(*head) = (*head)->next;
free(node);
return (1);
}
head = &(*head)->next;
pos++;
}
return (-1);
}
