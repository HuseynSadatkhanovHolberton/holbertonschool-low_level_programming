#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"  /* Include the prototype of hash_djb2 */

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
	char *s;

	s = "cisfun";
	printf("%lu\n", hash_djb2((unsigned char *)s));
	s = "Don't forget to tweet today";
	printf("%lu\n", hash_djb2((unsigned char *)s));
	s = "98";
	printf("%lu\n", hash_djb2((unsigned char *)s));

	return (EXIT_SUCCESS);
}

