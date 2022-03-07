#ifndef __ZERO_H__
#define __ZERO_H__
/* Zero finding of non-linear functions */
extern float bisect(float f(float x), float x1, float x2, float xac);
extern float regula(float f(float x), float x1, float x2, float xac);
extern float newton(float f(float x, float *f, float *df), 
		    float x1, float x2, float xac);
#endif
