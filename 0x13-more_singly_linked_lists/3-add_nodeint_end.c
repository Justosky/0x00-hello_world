#include "lists.h"

/**
*add_nodeint_end - A function that adds a node at the end of a listint_t list
*@head: A pointer which points to the first element of the list.
*@n: A memeber of the node structure
*Return: Returns the a pointer which points to the address of the last node.
*/

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
			lastnode->next = NULL;
			lastnode->n = n;
			return (lastnode);
		}
		else
		{

			for (; (*temp).next != NULL ;)
			{
				temp = temp->next;
			}
		}
	}
	temp->next = lastnode;
	return (lastnode);
}
