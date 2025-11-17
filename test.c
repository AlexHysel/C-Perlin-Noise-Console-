#include <stdio.h>
#include "hpn.h"

int	main(int argc, char *args[])
{
	unsigned int	seed;

	if (argc > 1)
		seed = atoi(args[1]);
	else
		seed = 0;

	srand(seed);
	short	**grid;
	short	w = atoi(args[2]);
	short	h = atoi(args[3]);

	grid = create_grid(w, h);
	display_grid(grid);

	t_cell	*cell = find_cell(2.5, 1.5, grid);
	printf("\n=== CELL ===\n%4d %4d \n%4d %4d", cell->ul, cell->ur, cell->bl, cell->br);
	float angle = perlin_noise(2.5, 1.5, grid);
	printf("\n\nANGLE = %f", angle);
	//printf("\n\n=== COS SIMILARITY ===\n%4d %4d \n%4d %4d", cos+similarity(cell->ul, ), cell->ur, cell->bl, cell->br);
}
