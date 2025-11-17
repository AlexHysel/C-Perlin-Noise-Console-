#include <stdio.h>
#include "hpn.h"

int	main(int argc, char *args[])
{
	unsigned int	seed;
	//float			noise;

	if (argc > 1)
		seed = atoi(args[1]);
	else
		seed = 0;

	srand(seed);
	short	**grid;
	short	w = atoi(args[2]);
	short	w2;
	short	h = atoi(args[3]);
	grid = create_grid(w, h);
	while (h-- > 0)
	{
		w2 = w;
		while (w2-- > 0)
			printf("%4d ", grid[w2][h]);
		printf("\n");
	}
}
