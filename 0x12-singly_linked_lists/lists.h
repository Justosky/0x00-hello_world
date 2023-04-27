#ifndef lists_h
#define lists_h
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*struct list_s - A structure with name list_s and a data type of
*struct list_s. It has three members:
* a char pointer *str, Unsigned int len and and
*and a pointer next which points to struct list_s
*@str: A pointer and a member of the structure.
*@len: A variable of unsigned int datatype and a member of the structure
*@next: A pointer which points to the structure which it is a member of.
*It will be used to transverse the different nodes created with the structure.
*/

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
int _putchar(char c);

#endif /* #endif lists_h*/
