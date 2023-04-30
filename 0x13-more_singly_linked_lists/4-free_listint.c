#include "lists.h"

/**
*free_listint - A function that frees listint_t list
*@head: A pointer that points to the first node of the list
*Return: Returns nothing.
*/

void free_listint(listint_t *head)
{
	listint_t *free_list;

	for (; head->next != NULL ;)
	{
		free_list = head->next;
		free(head);
		head = free_list;

	}

}

