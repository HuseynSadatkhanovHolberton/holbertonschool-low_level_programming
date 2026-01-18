#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to pointer to first node
 * @str: string to store in the new node
 *
 * Return: pointer to new node, or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *current;
	unsigned int len = 0;

	if (str == NULL)
		return NULL;

	/* Allocate memory for new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return NULL;

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return NULL;
	}

	/* Compute string length */
	while (str[len] != '\0')
		len++;
	new_node->len = len;
	new_node->next = NULL;

	/* If list is empty, new node becomes head */
	if (*head == NULL)
	{
		*head = new_node;
		return new_node;
	}

	/* Traverse to last node */
	current = *head;  
	while (current->next != NULL)
		current = current->next;

	current->next = new_node;

	return new_node;
}

