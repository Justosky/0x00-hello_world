#include "lists.h"

/**
 * print_list - A function that prints takes a constant *h of a data type
 *list_t as argument and returns an interger which is the value of the number
 *of nodes in a linked list.
 * @h: This pointer is used to tranverse the single linked list.
 * Return: the number of nodes in a single linked list
 */

size_t print_list(const list_t *h)
{
	int count;

	for (count = 0; h != NULL; count++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
		printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	return (count);
}
