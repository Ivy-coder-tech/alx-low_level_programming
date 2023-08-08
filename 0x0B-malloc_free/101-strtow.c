#include "main.h"

/**
 *ch_free_grid - main entry
 *@grid: input
 *@height: input
 */

void ch_free_grid(char **grid, size_t height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
				free(grid[height]);
				free(grid);
	}
}

/**
 *strtow - splits a string into words
 *@str: the word to be splitted
 *Return: The pointer to an array of strings
 */

char **strtow(char *str)
{
	char **result;
	size_t c, height, i, j, k;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
	if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
	height++;
	result = malloc(sizeof(char *) * (height + 1));
	if (result == NULL)
	{
		free(result);
		return (NULL);
	}
	for (i = k = 0; i < height; i++)
	{
		for (c = k; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				k++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				result[i] = malloc((c - k + 2) * sizeof(char));
				if (result[i] == NULL)
				{
					ch_free_grid(result, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; k <= c; k++, j++)
			result[i][j] = str[k];
		result[i][j] = '\0';
	}
	result[i] = NULL;
	return (result);
}
