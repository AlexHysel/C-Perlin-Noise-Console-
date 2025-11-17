#include "hpn.h"

static float	angle_in_cell(float x, float y)
{
	x = x - (int) x;
	y = y - (int) y;
	return ((float) atan2(y, x) / M_PI * 180);
}

float	perlin_noise(float x, float y, short **grid)
{
	if (x < 0)
		x * -1;
	if (y < 0)
		y * -1;

	t_cell	*cell;
	float	angle;

	cell = find_cell(x, y, grid);
	angle = angle_in_cell(x, y);

	return (angle);
}

short	**create_grid(unsigned int width, unsigned int height)
{
	short			**grid;
	unsigned int	h;

	if (!width || !height)
		return (NULL);
	grid = malloc(width * sizeof(short *) + width);
	grid[width] = 0;
	while(width-- > 0)
	{
		grid[width] = malloc(height * sizeof(short) + height);
		grid[width][height] = 0;
		h = height;
		while (h-- > 0)
			grid[width][h] = random_angle();
	}
	return (grid);
}

t_cell	*find_cell(float x, float y, short **grid)
{
	t_cell	*cell;
	short	x2;
	short	y2;

	cell = malloc(sizeof(t_cell));

	x2 = x;
	y2 = y;
	cell->ul = grid[x2][y2];
	cell->ur = grid[x2 + 1][y2];
	cell->bl = grid[x2][y2 + 1];
	cell->br = grid[x2 + 1][y2 + 1];
	return (cell);
}
