#include "lists.h"
/**
 *insert_nodeint_at_index - func takes three arguments
 *@head: is a pointer
 *@idx: is int index value
 *@n: is a integer value
 *Return: (NULL)
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *headaux;
listint_t *newnode;
unsigned int size;
size = 0;
newnode = malloc(sizeof(listint_t));
if (newnode == NULL)
return (NULL);
newnode->n = n;
if (idx == 0)
{
newnode->next = *head;
*head = newnode;
return (newnode);
}
headaux = *head;
while (headaux != NULL && size != idx - 1)
{
size++;
headaux = headaux->next;
}
if (size == idx - 1 && headaux != NULL)
{
newnode->next = headaux->next;
headaux->next = newnode;
return (newnode);
}
free(newnode);
return (NULL);
}
