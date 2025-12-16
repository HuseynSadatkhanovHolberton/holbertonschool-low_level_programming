#include "main.h"
#include <limits.h>

/**
 * _atoi - convert a string to an integer
 * @s: string to convert
 *
 * Return: converted integer
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int started = 0;
	int result = 0;
	int digit;

	while (s[i] != '\0')
	{
		if (!started && s[i] == '-')
			sign *= -1;
		else if (!started && s[i] == '+')
			;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			started = 1;
			digit = s[i] - '0';

			if (result < (INT_MIN + digit) / 10)
				break;

			result = result * 10 - digit;
		}
		else if (started)
		{
			break;
		}

		i++;
	}

	if (!started)
		return (0);
	if (sign == -1)
		return (result);
	if (result == INT_MIN)
		return (INT_MIN);
	return (-result);
}
