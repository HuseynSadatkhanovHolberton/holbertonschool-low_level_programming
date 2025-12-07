#include "main.h"
#include <stdio.h> /* ONLY for local testing */

int main(void)
{
	printf("%d\n", _isdigit('0')); /* 1 */
	printf("%d\n", _isdigit('9')); /* 1 */
	printf("%d\n", _isdigit('a')); /* 0 */
	printf("%d\n", _isdigit(53));  /* 1 (ASCII for '5') */

	return (0);
}

