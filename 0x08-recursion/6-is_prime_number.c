#include "main.h"
/**
 * cal_prime - function that calculate the prime number
 * @j: the input number tp comute
 * @k: value use to divides the number
 *
 * Return: Always 0 (success)
 */

int cal_prime(int j, int k)
{
	if (k == 1)
	{
		return (1);
	}
	if (j % k == 0 && k > 0)
	{
		return (0);
	}
	return (cal_prime(j, k - 1));
}

/**
 * is_prime_number - function displaly if a given number is prime or not
 * @n: input number to go
 *
 * Return: awlays (0)
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (cal_prime(n, n - 1));
}
