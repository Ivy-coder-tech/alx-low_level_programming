#include <stdio.h>
/**
 * main - Allows us to write our code
 * Return: Always 0
 */
int main(void)
{
	int a = 'a';
	int b = '0';

	while (b <= '9')
	{
		putchar(b);
		b++;
	}
	while (a <= 'a')
	{
		putchar(a);
		a++;
	}
	putchar('\n');

	return (0);
}
