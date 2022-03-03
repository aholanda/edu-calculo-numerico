#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#define MAXIT 40
float zerobis(float f(float x), float x1, float x2, float xac) {
	int i;
	float xm, y;
	if (f(x1)*f(x2) >= 0.0) { 
		printf("f(x1)f(x2)<0=false\n");
		exit(-1);
	}
    	for (i=0; i<MAXIT; i++) {
        	xm = (x1+x2)/2;
        	y = f(xm);
        	if (y == 0.0 || fabs(x2-x1)/2 < xac)
            		return xm;
        	if (f(x1)*y > 0.0)
            		x1 = xm;
        	else
            		x2 = xm;
    }
    printf("Limit of %d iterations exceeded.\n", MAXIT);
    exit(-2);
}
