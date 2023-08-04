#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *main - adss positive numbers
 *@argc: number  of command line
 *@argv: array that contains the program command line
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int i, n, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (n = 0; argv[i][n] != '\0'; n++)
		{
			if (!isdigit(argv[i][n]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
		return (0);
}
