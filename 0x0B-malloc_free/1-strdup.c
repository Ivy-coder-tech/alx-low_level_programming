#include "main.h"

/**
 *_strdup -  returns a pointer to a newly allocated space in memory
 *@str: string to be copied
 *Return: pointer to new memory
 */

char *_strdup(char *str)
{
	int i;
	char *copy;
	int num = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		num++;

	copy = malloc(sizeof(char) * num + 1);

	if (copy == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		copy[i] = str[i];
	return (copy);
}
