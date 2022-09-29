#include "main.h"

/**
 * myfunc - function to loop through variable
 * @n: int argument
 * @result: int argument
 * Return: sqaure root
 */

int myfunc(int n, int result)
{
	if (result * result == n)
	{
		return (result);
	}
	else if (result * result > n)
	{
		return (-1);
	}
	else
		return (myfunc(n, result + 1));
}

/**
 * _sqrt_recursion - natural square root of a number
 * @n: int argument
 * Return: int
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (myfunc(n, 0));
}
