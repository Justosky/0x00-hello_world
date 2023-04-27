#include "lists.h"

/**
*free_list - A function
*@head: A pointer to the the first node.
*Return: Returns nothing
*/

void free_list(list_t *head)
{
	if (head != NULL)
	{
		free_list(head->next);
		if ((*head).str)
			free((*head).str);
		free(head);
	}
}
