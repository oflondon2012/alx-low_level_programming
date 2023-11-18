#include <stdio.h>

int main(int argc, char *argv[])
{
	// the first argv[] program print the program name
	printf("Program name: %s\n", argv[0]);
      // print the number of argument count
      printf("number of arugment (argc): %d\n", argc);
      for (int i = 0; i < argc; i++)
      {
	      printf("argument %d: %s\n", i, argv[i]);
      }
      return (0);
	
}      
