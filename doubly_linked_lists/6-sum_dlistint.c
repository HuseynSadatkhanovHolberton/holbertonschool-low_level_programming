#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the n values of a dlistint_t list
 * @head: pointer to the first node of the list
 *
 * Return: sum of all n values, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

