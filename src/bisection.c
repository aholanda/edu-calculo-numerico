#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#define N 40
float bisect(float f(float x), float a, float b, float xac) {
	int i=0;
	float m, fm;
	if (f(a)*f(b) >= 0.0) { 
		printf("f(a)f(b)<0=false\n");
		exit(1);
	}
    	while (i<N) {
        	m = (a+b)/2;
        	fm = f(m);
        	if (fm == 0.0 || fabs(a-b)/2 < xac)
            		return m;
        	if (f(a)*fm > 0.0) a = m;
        	else b = m;
		i++;
    }
    printf("Limit of %d iterations exceeded.\n", N);
    exit(1);
}
