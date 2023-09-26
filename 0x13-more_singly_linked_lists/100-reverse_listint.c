#include "lists.h"
/**
 *reverse_listint - func takes one argument head
 *@head: is apointer
 *Return: a pointer
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL;
listint_t *next = NULL;
if (!head)
return (NULL);
while (*head)
{
next = (*head)->next;
(*head)->next = prev;
prev = (*head);
(*head) = next;
}
(*head) = prev;
return (*head);
}
