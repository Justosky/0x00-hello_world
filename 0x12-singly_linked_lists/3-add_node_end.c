#include "lists.h"

/**
*add_node_end - Adds a node to the end of a list
*@head: A double pointer.
*@str: The string to be printed
*Return: Returns a pointer that points to the last node
*/

list_t *add_node_end(list_t **head, const char *str)
	{
	char *new_str;

	list_t *new_node = malloc(sizeof(list_t));

	if (!new_node)
	{
	return (NULL);
	}
	new_str = strdup(str);
	if (!new_str)
	{
	free(new_node);
	return (NULL);
	}
	new_node->str = new_str;
	new_node->next = NULL;

	if (*head == NULL)
	{
	*head = new_node;
	new_node->len = strlen(str);
	}
	else
	{
	list_t *current_node = *head;

	while (current_node->next != NULL)
	{
	current_node = current_node->next;
	}
	current_node->next = new_node;
	new_node->len = strlen(str);
	}
	return (new_node);
}

