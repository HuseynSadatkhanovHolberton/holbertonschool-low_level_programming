#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
 * struct dlistint_s - doubly linked list node
 * @n: integer stored in the node
 * @prev: points to the previous node
 * @next: points to the next node
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

/* Function prototypes */
size_t print_dlistint(const dlistint_t *h);            /* Task 0 */
size_t dlistint_len(const dlistint_t *h);              /* Task 1 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n);       /* Task 2 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);   /* Task 3 */
void free_dlistint(dlistint_t *head);                  /* Task 4 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index); /* Task 5 */
int sum_dlistint(dlistint_t *head);                    /* Task 6 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n); /* Task 7 */

#endif /* LISTS_H */

