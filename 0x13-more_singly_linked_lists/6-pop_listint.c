#include "lists.h"

/**
*pop_listint - A function that deletes the first node of a list
*and sets it's nth member to data and returns data. If the list is empty
*it returns 0.
*@head: A double pointer which points to another pointer that points
*to the first node of the listint_t list.
*Return: This function returns an interger which is
*the value of the nth memeber *of the list. It returns 0
*when the list is empty.
*/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
	return (0);
	else
	{
		if (*head != NULL)
		{
			temp = *head;
			data = temp->n;
			*head = (*head)->next;
			free(temp);
		}
	}
			return (data);
}
