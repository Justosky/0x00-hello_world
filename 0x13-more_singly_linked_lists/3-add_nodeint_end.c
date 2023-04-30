#include "lists.h"

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = *head;
	listint_t *lastnode  = malloc(sizeof(listint_t));
	lastnode->n = n;
	lastnode->next = NULL;

	if (lastnode == NULL)
	{

		return (NULL);
	}
	else 
	{

		if (*head == NULL)
		{
		
			*head = lastnode;
			return (lastnode);
		}
		else
		{

			for(; temp != NULL ;)
			{
				temp = temp->next;
			}
		}
	}

        temp->next = lastnode;
	return (lastnode);
}
