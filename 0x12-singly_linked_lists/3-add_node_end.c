#include "lists.h"
/**
 *add_node_end - takes tow arguments
 *@head: is apointer to the next node
 *@str: is a string provided.
 *Return: (new) node.
*/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new;
unsigned int sizeOfStr = 0;
list_t *temp = *head;
while (str[sizeOfStr])
{
sizeOfStr++;
}
new = malloc(sizeof(list_t));
if (!new)
return (NULL);
new->str = strdup(str);
new->len = sizeOfStr;
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}
while(temp->next)
temp = temp->next;
temp->next = new;
return (new);
}
