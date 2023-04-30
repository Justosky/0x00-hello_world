#include "lists.h"

listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *newnode = malloc(sizeof(listint_t));
	newnode->n = n;

	if (*head == NULL)
	{

	        *head = newnode;
		newnode->next = NULL;
	}
	else
	{

		newnode->next = *head;
		*head = newnode;
	}

	return (newnode);
}
