from __future__ import division
import sys
import math
def bisect(f, a, b, eps=0.0001, maxit=40):
        if f(a)*f(b) >= 0.0:
            sys.exit("f(a)f(b)<0=false")
        for i in range(maxit):
            m = (a+b)/2
            fm = f(m)
            if fm == 0.0 or abs(a-b)/2 < eps:
            		return m
            if (f(a)*fm > 0.0):
                a = m
            else: 
                b = m

        sys.exit("Limit of {} iterations exceeded."
                .format(maxit))

def f(x):
    return math.exp(x) - 2*x -5

if __name__=='__main__':
    r = bisect(f, 0.0, 4.0)
    print("f({:.4})~=0".format(r))
