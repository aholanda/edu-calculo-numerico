#include <math.h>
#include <stdio.h>
#include "numcalc.h"
float f(float x) {
    return expf(x) - x -2;
}

int main(int argc, char**argv) {
    float r = zerobis(f, -2, 0, 0.01);
    printf("f(%f)~=0\n", r);
}
