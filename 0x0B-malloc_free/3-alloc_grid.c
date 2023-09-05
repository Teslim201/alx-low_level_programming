#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)
{
	int **mee;
	int l, w;

	if (width <= 0 || height <= 0)
		return (NULL);

	mee = malloc(sizeof(int *) * height);

	if (mee == NULL)
		return (NULL);

	for (l = 0; l < height; l++)
	{
		mee[l] = malloc(sizeof(int) * width);

		if (mee[l] == NULL)
		{
			for (; l >= 0; l--)
				free(mee[l]);

			free(mee);
			return (NULL);
		}
	}

	for (l = 0; l < height; l++)
	{
		for (w = 0; w < width; w++)
			mee[l][w] = 0;
	}

	return (mee);
}

