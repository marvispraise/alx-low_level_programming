#include <stdio.h>

/**
* main - Prints the name of the program
* @argc: Number of command line arguments
* @argv: Array name
* Return: 0
*/

void main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s ", argv[i]);
	}
	printf("\n");
}
