#include "lists.h"

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
