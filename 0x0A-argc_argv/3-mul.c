#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *main - multiplies two numbers
 *@argc: argument count
 *@argv: arguments vector
 *Return: 0 (sucess) or 1 (Fail)
 */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc >= 1)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
		return (0);
	}
	printf("Error\n");
	return (1);
}
