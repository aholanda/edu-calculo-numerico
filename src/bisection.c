#include "numcalc.h"
#define N 40
float bisect(float f(float x), float a, float b, float eps) {
	int i=0;
	float m, fm;
	if (f(a)*f(b) >= 0.0) ERROR("f(a)f(b)<0=false\n");
    	while (i<N) {
        	m = (a+b)/2;
        	fm = f(m);
        	if (fm == 0.0 || fabs(a-b)/2 < eps)
            		return m;
        	if (f(a)*fm > 0.0) a = m;
        	else b = m;
		i++;
    }
    ERROR("Limit of %d iterations exceeded.\n", N);
    return 0.0; /* Never get here. */
}
