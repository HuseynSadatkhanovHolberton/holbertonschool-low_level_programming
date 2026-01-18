#include <stdio.h>
#include "lists.h"

int main(void)
{
	list_t *head = NULL;
	size_t n;

	printf("=== Testing add_node ===\n");
	add_node(&head, "Hello");
	add_node(&head, "World");
	n = print_list(head);
	printf("-> %lu elements\n\n", n);

	printf("=== Testing list_len ===\n");
	printf("Length: %lu\n\n", list_len(head));

	printf("=== Testing add_node_end ===\n");
	add_node_end(&head, "End1");
	add_node_end(&head, "End2");
	n = print_list(head);
	printf("-> %lu elements\n", n);

	return 0;
}

