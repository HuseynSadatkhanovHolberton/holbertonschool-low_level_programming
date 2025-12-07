#include "main.h"
#include <stdio.h> /* only for local testing */

int main(void)
{
	int r;

	r = print_sign(98);
	printf(" -> %d\n", r);

	r = print_sign(0);
	printf(" -> %d\n", r);

	r = print_sign(-7);
	printf(" -> %d\n", r);

	return (0);
}

