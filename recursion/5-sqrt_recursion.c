#include "main.h"
/**
 * _sqrt_recursive - calculates r*r to check with n
 *@i: iterator number
 *@n:base number
 *Return: _sqrt_recursive(n, r + 1)r
 */

int _sqrt_recursive(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
		else
	{
	return (_sqrt_recursive(n, i + 1));
	}
}
/**
 * _sqrt_recursion - calculates the natural square root of n
 *@n: base number
 *Return: _sqrt_recursion(n, 2)
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (n);
	}
		return (_sqrt_recursive(n, 2));
}
