#include "lists.h"

/**
 * delete_nodeint_at_index - A function that deletes a node at a given
 *index
 * @head: A double pointer that points to a pointer that points
 *to the first element of the list
 * @index: index of node
 * Return: Returns A pointer to the index node
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp, *next;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	temp = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (temp->next == NULL)
			return (-1);
		temp = temp->next;
	}
	next = temp->next;
	temp->next = next->next;
	free(next);
	return (1);

}

