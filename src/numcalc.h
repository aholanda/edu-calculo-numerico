#ifndef __NUMCALC_H__
#define __NUMCALC_H__

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define ERROR(...) do {\
		fprintf(stderr, "ERROR: %s.%d: ", \
			__FILE__, __LINE__); \
	       	fprintf(stderr, __VA_ARGS__); \
		exit(1); \
	} while(0)

/* Zero finding of non-linear functions */
extern float bisect(float f(float x), float x1, float x2, float xac);
extern float regula(float f(float x), float x1, float x2, float xac);
extern float newton(float f(float x, float *f, float *df), 
		    float x1, float x2, float xac);

#endif
