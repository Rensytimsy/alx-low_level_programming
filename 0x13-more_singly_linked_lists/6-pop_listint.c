#include "lists.h"
/**
 *pop_listint - func takes one parameter head;
 *@head: is a node with a pointer to another node.
 *Return: (0) for success
*/
int pop_listint(listint_t **head)
{
listint_t *firstNode;
if (*head == NULL)
return (0);
firstNode = *head;
*head = (*head)->next;
free(firstNode);
return (0);
}
