#include "lists.h"
/**
 *pop_listint - func takes one parameter head;
 *@head: is a node with a pointer to another node.
 *Return: (0) for success
*/
int pop_listint(listint_t **head)
{
int v = 0;
listint_t *firstNode;
if (*head == NULL)
return (0);
v = (*head)->n;
firstNode = (*head)->next;
free(*head);
*head = firstNode;
return (v);
}
