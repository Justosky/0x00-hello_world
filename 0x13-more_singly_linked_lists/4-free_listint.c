#include "lists.h"

/**
*free_listint - A function that frees listint_t list
*@head: A pointer that points to the first node of the list
*Return: Returns nothing.
*/

void free_listint(listint_t *head)
{
	listint_t *free_list;

	for (; head != NULL ;)
	{
		free_list = head;
		free(free_list);
		head = head->next;

	}

}

