#include "hpn.h"
#include <stdio.h>
#include <unistd.h>

static void	repeat_char(char ch, int times)
{
	while (times > 0)
	{
		printf("%c", ch);
		times--;
	}
}

static int get_2d_y(short **str)
{
	int	y = 0;

	while (str[y])
		y++;
	return (y);
}

static int get_2d_x(short **str)
{
	int	x = 0;

	while (str[0][x])
		x++;
	return (x);
}

static int get_len(char *str)
{
	int	len = 0;

	if (!str)
		return (0);
	while (str[len])
		len++;
	return (len);
}

static void	print_header(char *str, int width)
{
	int half_len = (width - get_len(str)) / 2;

	repeat_char('=', half_len);
	if (str)
		printf("%s", str);
	repeat_char('=', half_len);
	printf("\n");
}

void	display_grid(short **grid)
{
	int	len = get_2d_x(grid) * 4;
	print_header(" GRID ", len);
	for (int x = 0; grid[x]; x++)
	{
		for (int y = 0; grid[x][y]; y++)
		{
			printf("%4d", grid[x][y]);
		}
		printf("\n");
	}
	print_header(NULL, len);
}
