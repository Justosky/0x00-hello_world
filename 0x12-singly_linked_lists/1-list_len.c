#include "lists.h"

/**
*list_len - A function that takes a constant pointer list_t *h as
*an argument and uses same pointer to transverse a list of nodes within
*The list. In each iteration the initialized variable count is incremented
*by one and the the pointer h is update to point to the next pointer of the
*Structure.
*@h: A pointer used to transverse the list.
*Return: The function returns an interger which is the value for the members of
*the list.
*/

size_t list_len(const list_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
	{
		h = h->next;
	}
	return (count);
}
