#include "main.h"

/**
 *_strchr: locates a character in a string
 *@s: pointer to be searched
 *@c: character to be searched
 *Return: s or NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
