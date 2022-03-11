#include "numcalc.h"
#define N 40
float newton(float fd(float x, float *f, float *df), 
	     float a, float b, float eps) {
	int i=0;
	float f, df, dx, m;
	m=0.5*(a+b);
    	while (i<N) {
		fd(m, &f,&df);
		dx=f/df;
		m -= dx;
        	if ((a-m)*(m-b) < 0.0) 
			ERROR("Jumped out of brackets.");
		if (fabs(dx) < eps) return m;
		i++;
    }
    ERROR("Limit of %d iterations exceeded.\n", N);
    return 0; /* Never get here. */
}
