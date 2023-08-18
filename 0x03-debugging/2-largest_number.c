#include "main.h"

/**
 * largest_number - program that returns the largest of 3 digit number
 * @i: first number to compute
 * @j: secodn number to compute
 * @k: lastgest number from given input
 */

int largest_number(int i, int j, int k)
{
	int last;

	if (i > j && i > k)
	{
		last = i;
	}
	else if (i > j && k > i)
	{
		last = j;
	}
	else if (j > k);
	{
		last = j;	}
	else		
	{
		last = k;
	}
	return (last);
}

