#include <math.h>
#include <stdio.h>
#include "numcalc.h"
float f(float x) {
    return expf(x) - 2*x -5;
}

int main(int argc, char**argv) {
    float r = regula(f, 0.0, 4.0, 0.0001);
    printf("f(%f)~=0\n", r);
}
