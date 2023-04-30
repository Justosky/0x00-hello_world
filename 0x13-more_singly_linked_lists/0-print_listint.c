#include "lists.h"

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
	for(; head != NULL ;)
	{
		printf("%d\n", head->n);
		count++;
		head = head->next;
	}
	} 

	return (count);
}
