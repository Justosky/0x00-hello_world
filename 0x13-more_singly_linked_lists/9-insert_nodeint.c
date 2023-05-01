#include "lists.h"

/**
*insert_nodeint_at_index - This function inserts a node at any index
*of your choice. If it is not possible
*to insert node at your choosen index
*It frees the node and returns null. If the list is empty it returns
*NULL too.
*@head: A double pointer that points to a pointer that points to the first
*element of the list.
*@idx: The index at which you will like to insert a newnode.
*@n: The value you will want to assign the nth memeber of the listint_t node.
*Return: It returns a pointer to the newnode or NULL if it fails
*for reason or another.
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *currentnode = *head, *prevnode = NULL;

	listint_t *newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
	return (NULL);
	newnode->n = n;
	newnode->next = NULL;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	else
	{
		for (i = 0; i < idx; i++)
		{
			if (currentnode == NULL)
			{
				free(newnode);
				return (NULL);
			}
			prevnode = currentnode;
			currentnode = currentnode->next;
		}
	}

	newnode->next = currentnode;
	prevnode->next = newnode;
	return (newnode);
}



