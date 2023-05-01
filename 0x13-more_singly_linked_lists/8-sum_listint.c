#include "lists.h"

/**
*sum_listint - This function computes the some of nth data of
*a listint_t list and returns the sum.
*@head: The pointer which points to the first element of the
*list.
*Return: The function returns an interger which is the sum of
*all nth data of the list.
*/

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *currentnode = head;

	if (currentnode == NULL)
	return (0);

	for (; currentnode != NULL ;)
	{
		sum = sum + currentnode->n;
		currentnode = currentnode->next;
	}
		return (sum);
}
