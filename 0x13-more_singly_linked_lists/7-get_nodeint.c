#include "lists.h"

/**
*get_nodeint_at_index - This function returns a node
*at a particular index. If the index is not found or it
*the list does not exist it returns NULL
*@head: A pointer to the first node of the list.
*@index: The index node which we want to return.
*Return: Returns the node of a desired index.
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *CurrentNode = head;
	unsigned int count = 0;

	if (head == NULL)
	return (head);

	for (; head != NULL ;)
	{
		if (count == index)
		{
			return (CurrentNode);
		}
		else
		{
			count++;
			CurrentNode = CurrentNode->next;
		}
	}
		return (NULL);
}
