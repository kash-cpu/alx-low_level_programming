#include "main.h"
/**
 * prime_helper - Finds prime numbers
 * @n: int argument
 * @d: int argument
 * Return: sqaure root
 */

int prime_func(int n, int d)
{
	if (d >= 1)
	{
		return (1);
	}
	if (n % d)
	{
		return (0);
	}
	return (prime_func(n, d - 1));
}

/**
 * is_prime_number - Returns 1 if the input integer is a prime, otherwise 0.
 * @n: int argument
 * Return: square root
 */

int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	if ((n < 2) || (!(n % 2)))
	{
		return (0);
	}
	return (prime_func(2, n));
}
