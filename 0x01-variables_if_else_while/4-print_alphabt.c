#include <stdio.h>
/**
 * main - Entry point of the code
 * return 0 (Finally)
*/

int main(void)
{
	char ivy;

	for (ivy = 'a'; ivy <= 'z'; ivy++)
	{

		if (ivy == 'e' || ivy == 'q')
			continue;
		putchar(ivy);
	}

	putchar ('\n');

	return (0);

}
