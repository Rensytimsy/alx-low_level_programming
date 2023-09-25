#include "lists.h"
/**
 *free_listint2 - func takes one argument head
 *@head: is a node;
*/
void free_listint2(listint_t **head)
{
listint_t *randNode;
if (!head)
return;
randNode = *head;
while (randNode)
{
randNode = randNode->next;
free(*head);
*head = randNode;
}
*head = NULL;
}
