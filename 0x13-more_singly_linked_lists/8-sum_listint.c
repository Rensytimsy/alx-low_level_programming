#include "lists.h"
/**
 *sumNodes - func takes two parameters head and sum;
 *@head: is a pointer
 *@sum: is sum of all n values calculations
*/
void sumNodes(listint_t *head, int *sum)
{
int n;
if (!head)
return;
n = head->n;
sumNodes(head->next, sum);
*sum = *sum + n;
}
/**
 *sum_listint - func takes one argument head
 *@head: is a node which points to the next node
 *Return: (0) for success
*/

int sum_listint(listint_t *head)
{
int sumOfNodes = 0;
while (head)
{
sumNodes(head, &sumOfNodes);
return (sumOfNodes);
}
return (0);
}
