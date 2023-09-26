#include "lists.h"
/**
 *get_nodeint_at_index - func takes two arguments head index
 *@head: is a node with a pointer to the next node
 *@index: is the nth element we are looking for
 *Return: (NULL)
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *nthElement = head;
unsigned int countElements = 0;
while (nthElement != NULL)
{
if (countElements == index)
return (nthElement);
countElements++;
nthElement = nthElement->next;
}
return (NULL);
}
