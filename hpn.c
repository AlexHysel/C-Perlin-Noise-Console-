#include "hpn.h"

float	perlin_noise(float x, float y)
{
	
}

short	**create_grid(unsigned int width, unsigned int height)
{
	short			**grid;
	unsigned int	h;

	if (!width || !height)
		return (NULL);
	grid = malloc(width * sizeof(short *) + 1);
	grid[width] = 0;
	while(width-- > 0)
	{
		h = height;
		grid[width] = malloc(height * sizeof(short *));
		while (h-- > 0)
			grid[width][h] = random_angle();
	}
	return (grid);
}
