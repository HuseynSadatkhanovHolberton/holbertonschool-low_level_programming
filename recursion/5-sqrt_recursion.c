#include "main.h"

/**
 * _sqrt_helper - checks for the natural square root of a number
 * @n: the number to find the square root of
 * @i: the current guess
 *
 * Return: the natural square root, or -1 if none exists
 */
int _sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_sqrt_helper(n, i + 1));
}

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_helper(n, 0));
}

