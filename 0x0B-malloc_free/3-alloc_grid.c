#include "main.h"

/**
 *alloc_grid - 2 dimensional array of integers
 *@width: number for length
 *@height: number for growth
 *Return: pointer to array
 */

int **alloc_grid(int width, int height)
{
	int i;
	int g;
	int **result;

	if (width <= 0 || height <= 0)
		return (NULL);

	result = malloc(sizeof(int *) * height);

	if (result == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		result[i] = malloc(sizeof(int) * width);

		if (result[i] == NULL)
		{
			free(result);
			for (g = 0; g <= height; g++)
				free(result[g]);
			return (NULL);
		}
		for (g = 0; g < width; g++)
			result[i][g] = 0;
	}
	return (result);
}
