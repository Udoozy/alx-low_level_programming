#include "main.h"
/**
 * free_grid - The function name
 * @grid: the pointer to the 2dimention array to free
 * @height: the column of the array
 * Return: Always return void
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
