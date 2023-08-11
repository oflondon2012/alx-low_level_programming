#include<stdio.h>
#include<unistd.h>
/**
 * main - Program that prints the size of various types on the computer
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	char ct;
	long int la;
	long long int li;
	float fl;

	printf("Size of a char: %lu byte(s)\n", (unsigned long) sizeof(ct));
	printf("Size of a int: %lu byte(s)\n", (unsigned long) sizeof(a));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)  sizeof(la));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)  sizeof(li));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)  sizeof(fl));
	return (0);
}
