#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code ALX stdents
 *
 * Return: Always 0
 */

int main(void)
{
	char *s;

	s = _strdup("Gbenga a boy");
	if (s == NULL)
	{
		printf("failed to alocate memory\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);
	return (0);
}
