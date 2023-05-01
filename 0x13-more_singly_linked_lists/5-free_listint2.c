#include "lists.h"

/**
*free_listint2 - Frees a listint_t list
*@head: A double pointer that points to a pointer that points to the
*the first element of the list.
*Returns: This function returns nothing or void.
*/

void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
}
