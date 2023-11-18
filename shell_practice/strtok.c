#include <stdio.h>
#include <string.h>

int main(void)
{
	char ch[38] = "this is string to test with strtok";
	char delim[5] = " ";
	char *trunks;
	int j;

	trunks = strtok(ch, delim);
	//printf("%p\n %p\n", ch, trunks);
	while (trunks != NULL)
	{
		printf("%s\n", trunks);
		trunks = strtok(NULL, delim);
	}
	for (j = 0; j < 38; j++)
	{
		if (ch[j] == '\0')
			printf("\\0");
		else
			printf("%c", ch[j]);
	}
	return (0);
}
