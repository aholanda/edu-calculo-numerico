#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#define N 40
float rtbis(float f(float x), float x1, float x2, float xac) {
	int i;
	float xm, y;
	if (f(x1)*f(x2) >= 0.0) { 
		printf("f(x1)f(x2)<0=false\n");
		exit(-1);
	}
    	for (i=0; i<N; i++) {
        	xm = (x1+x2)/2;
        	y = f(xm);
        	if (y == 0.0 || fabs(x2-x1)/2 < xac)
            		return xm;
        	if (f(x1)*y > 0.0)
            		x1 = xm;
        	else
            		x2 = xm;
    }
    printf("Limit of %d iterations exceeded.\n", N);
    exit(-1);
}

float f(float x) {
    return expf(x) - x -2;
}

int main(char **argv, int argc) {
    float r = rtbis(f, -2, 0, 0.01);
    printf("f(%f)~=0\n", r);
}
