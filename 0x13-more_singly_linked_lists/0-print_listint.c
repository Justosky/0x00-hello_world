#include "lists.h"

/**
*print_listint - This function prints all elements of a list.
*@h: The head pointer pointing to the first element of the list.
*Return: The function returns an interger which is the total number of
*elements in the listint_t list.
*/

size_t print_listint(const listint_t *h)
{

	size_t count = 0;
	const listint_t *head = h;

	if (head == NULL)
	{

		printf("The list is empty\n");
		return (count);
	}
	else
	{
	for (; head != NULL ;)
	{
		printf("%d", head->n);
		count++;
		head = head->next;
	}
	}
	return (count);
	printf("\n");
}
