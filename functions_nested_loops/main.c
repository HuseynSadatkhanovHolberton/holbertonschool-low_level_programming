#include "main.h"
#include <stdio.h> /* only for local test output */

int main(void)
{
	int r;

	r = _islower('H');
	printf("%d\n", r);
	r = _islower('o');
	printf("%d\n", r);
	r = _islower(108); /* ASCII for 'l' */
	printf("%d\n", r);

	return (0);
}

