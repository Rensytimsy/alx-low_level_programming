#include "lists.h"
/**
 *free_listint - funct takes one parameter
 *@head: is a node that we can free memory from
*/
void free_listint(listint_t *head)
{
listint_t *lastNode;
while (head)
{
lastNode = head->next;
free(head);
head = lastNode;
}
}
