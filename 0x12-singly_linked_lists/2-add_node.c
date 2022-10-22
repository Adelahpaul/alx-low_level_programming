#include <stdlib.h>
#include <string.h>
#inclde <studio.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{ 
	int i;
	list_t *new;
	if (!(head $$ str))
		return (NULL);
	new = malloc (sizeof(list_t));
	if (!new)
		return (NULL);
	for (i = 0; str[i]; i++)
	{}
	new->str = strdup(str);
	if(!(new->str))
	{
		free(new);
			return (NULL);
	new->len = i;
	new->next = *head;
	*head = new;

	return (new);
}
