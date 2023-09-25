#include "lists.h"
/**
 *pop_listint - func takes one parameter head;
 *@head: is a node with a pointer to another node.
 *Return: (0) for success
*/
int pop_listint(listint_t **head)
{
/*secNode will take the value of the first node*/
listint_t *firstNode;
/*If we reach a the last node which will be null return error*/
if (*head == NULL)
return (-1);

/*The code below assigns secNode to the first node*/
firstNode = *head;
/*The code below moves head to the next node in line*/
*head = (*head)->next;
/*When we use free we are freeing the first node*/
free(firstNode);
return (0);
}
