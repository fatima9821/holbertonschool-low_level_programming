#include "variadic_functions.h"
/**
 * sum_them_all - function that return the sum of ell parameters
 * @n: number
 * Return: returns the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	int sum = 0;
	unsigned int i;

	va_start(nums, n);

	for (i = 0; i < n; i++)
		sum += va_arg(nums, int);

	va_end(nums);

	return (sum);
}
