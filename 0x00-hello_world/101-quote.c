#include<stdio.h>
#include<unistd.h>
/**
 * main - Program that print a line of string to the standard e
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	char *mess = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	fputs(mess, stdout);
	return (1);
}
