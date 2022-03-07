#include "numcalc.h"
#define N 40
float regula(float f(float x), float a, float b, float eps) {
	int i=0;
	float d, dx, m, fm, fa, fb, t;
	if (f(a)*f(b) >= 0.0) ERROR("f(a)f(b)<0=false\n");
	fa = f(a), fb = f(b);
	if (fb < 0.0) t=b, b=a, a=t, t=fb, fb=fa, fa=t;
	dx=b-a;
    	while (i<N) {
        	m = a+dx*fa/(fa-fb);
        	fm = f(m);
        	if (fm < 0.0) d=a-m, a = m, fa=fm;
        	else d=b-m, b = m, fb=fm;
		i++;
		dx=b-a;
        	if (fm == 0.0 || fabs(d) < eps)
            		return m;
    }
    ERROR("Limit of %d iterations exceeded.\n", N);
    return 0.0; /* Never get here. */
}
