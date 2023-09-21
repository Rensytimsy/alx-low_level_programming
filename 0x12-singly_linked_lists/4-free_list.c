#include "lists.h"
/**
 *free_list - a func takes one arg
 *@head: is the starting pointer to the next node.
*/

void free_list(list_t *head)
{
free(head);
}
