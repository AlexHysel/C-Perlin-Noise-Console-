//Perlin Noise by AlexHysel

#ifndef HYSEL_PERLIN_NOISE_H
# define HYSEL_PERLIN_NOISE_H
# ifndef CHARSET
#  define CHARSET " `.,:^=>+*!?#%@"
# endif

# include <stdlib.h>
# include <math.h>

//perlin noise
float	perlin_noise(float x, float y);
short	**create_grid(unsigned int width, unsigned int height);

//math functions
short	random_angle();
float	cos_similarity(short angle1, short angle2);

//display

#endif
