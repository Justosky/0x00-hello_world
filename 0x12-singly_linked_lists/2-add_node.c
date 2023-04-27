#include "lists.h"

/**
*add_node - A function that adds node at the beginning of a list
*@head: A double pointer
*@str: A pointer
*Return: Returns a pointer to a new node.
*/

list_t *add_node(list_t **head, const char *str)
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
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}

