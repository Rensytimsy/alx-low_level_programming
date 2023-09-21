#include "lists.h"
/**
 *free_list - a func takes one arg
 *@head: is the starting pointer to the next node.
*/

void free_list(list_t *head)
{
list_t *temp;
while (head)
{
temp = head->next;
free(head->str);
free(head);
head = temp;
}
}
