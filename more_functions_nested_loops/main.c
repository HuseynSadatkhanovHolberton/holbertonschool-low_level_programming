#include "main.h"
#include <stdio.h> /* ONLY for local testing */

int main(void)
{
	printf("%d\n", _isupper('A')); /* should print 1 */
	printf("%d\n", _isupper('Z')); /* should print 1 */
	printf("%d\n", _isupper('a')); /* should print 0 */
	printf("%d\n", _isupper('0')); /* should print 0 */

	return (0);
}

