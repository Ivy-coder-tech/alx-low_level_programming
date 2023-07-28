#include "main.h"

/**
 *string_toupper - changes all lowercase letters of a string to uppercase.
 *@S: String to be converted
 *Return: S
 */

char *string_toupper(char *S)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}
	return (S);
}
