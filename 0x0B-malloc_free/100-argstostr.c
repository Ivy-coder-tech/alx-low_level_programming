#include "main.h"

/**
 *argstostr - concatenates all the arguments
 *@ac: the integer argument count
 *@av: the character argument
 *Return: A pointer to the array
 */

char *argstostr(int ac, char **av)
{
	char *out;
	int l, m, n = 0, len = 0;

	if (ac == 0)
		return (NULL);
	if (av == 0)
		return (NULL);

	for (l = 0; l < ac; l++)
	{
		for (m = 0; av[l][m]; m++)
			len++;
	}
	len += ac;

	out = malloc(sizeof(char) * len + 1);
	if (out == NULL)
		return (NULL);

	for (l = 0; l < ac; l++)
	{
		for (m = 0; av[l][m]; m++)
		{
			out[n] = av[l][m];
			n++;
		}
		if (out[n] == '\0')
		{
			out[n++] = '\n';
		}
	}
	return (out);
}
