#include "lists.h"

/**
*listint_len - A function that prints the total elements in
*a listint_t list.
*@h: A pointer which points to the first element of the list.
*Return: Returns an interger which is the total number of the
*the elements within the list
*/

size_t listint_len(const listint_t *h)
{

	size_t count = 0;
	const listint_t *head = h;

	if (head == NULL)
	{

		return (count);
	}
	else
	{

		for (; head != NULL ;)
		{

			count++;
			head = head->next;

		}
	}

	return (count);
}
