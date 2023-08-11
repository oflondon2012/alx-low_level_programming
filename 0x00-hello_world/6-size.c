#include<stdio.h>
/**
 * main - Program that prints the size of various types on the computer
 * Return: Always 0 (Success)
 */
int main(void)
{
	dprintf("Size of a char: %d byte(s)\n", sizeof(char));
	dprintf("Size of a int: %d byte(s)\n", sizeof(int));
	dprintf("Size of a long int: %d byte(s)\n", sizeof(long int));
	dprintf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	dprintf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
