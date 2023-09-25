#include "lists.h"
/**
 *add_nodeint - func takes two parameters head and n
 *@head: is a node that has a pointer to another node
 *@n: are the values presented
 *Return: returns the new nodes created;
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
new = malloc(sizeof(listint_t));
if (!new)
return (NULL);
new->n = n;
new->next = (*head);
(*head) = new;
return (*head);
}
