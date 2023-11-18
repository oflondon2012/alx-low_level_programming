#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	int j, add;
	printf("argc or ac = %d\n", ac);
	printf("argv content is argv[]\n");
	add = 0;
	for (j = 0; j < ac; j++)
	{
		printf("argv[%d] = %s\n", j, av[j]);
		add += atoi(av[j]);
	}
	printf("sum is %d\n", add);
	return (0);
}
