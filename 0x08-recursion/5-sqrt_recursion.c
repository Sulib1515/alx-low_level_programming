#include "main.h"
int _sqrt(int x, int y);

/**
 * _sqrt_recursion - It returns the value of square root of n.
 * @n: an input integer
 * Return: The square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt(1, n));
}

/**
 * _sqrt - find square root
 * @x: main value
 * @y: sqrt value
 * Return: the square root
 */

int _sqrt(int x, int y)
{
	if (x > y)
		return (-1);

	else if (x * x == y)
		return (x);

	return (_sqrt(x + 1, y));
}
