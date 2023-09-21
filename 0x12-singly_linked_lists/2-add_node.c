#include "lists.h"
/**
 * add_node - func takes two args
 * @head: is a pointer to a node
 * @str: is a string
 * Return: (*head) new created node
*/

list_t *add_node(list_t **head, const char *str)
{
unsigned int sizeOfStr = 0;
list_t *new;
while (str[sizeOfStr])
sizeOfStr++;
new = malloc(sizeof(list_t));
if (!new)
return (NULL);
new->str = strdup(str);
new->len = sizeOfStr;
new->next = (*head);
(*head) = new;
return (*head);
}
