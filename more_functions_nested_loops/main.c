#include "main.h"
#include <stdio.h> /* ONLY for testing */

int main(void)
{
	printf("%d\n", mul(5, 3));     /* 15 */
	printf("%d\n", mul(-2, 4));    /* -8 */
	printf("%d\n", mul(-7, -6));   /* 42 */
	printf("%d\n", mul(0, 12345)); /* 0 */

	return (0);
}

