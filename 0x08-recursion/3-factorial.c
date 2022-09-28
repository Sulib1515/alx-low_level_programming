#include "main.h"

/**
 *  factorial - returns the factorial of a number
 *  @n: number to return the factorial from
 *  Return: factorial of n
 */

int factorial(int n)
{
	if (n <= 1)
		return (0);
	return n * fatorial(n - 1);
}
