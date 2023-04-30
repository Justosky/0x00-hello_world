#include "lists.h"

/**
*add_nodeint - A function that adds new node at the beginning of a list.
*@head: The pointer which is pointing to the first element of the list.
*@n: The data that each node contains.
*Return: Returns a pointer which points to the address of newnode.
*/

listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *newnode = malloc(sizeof(listint_t));

	newnode->n = n;

	if (*head == NULL)
	{
		*head = newnode;
		newnode->next = NULL;
		return(newnode);
	}
	else
	{

		newnode->next = *head;
		*head = newnode;
	}

	return (newnode);
}
