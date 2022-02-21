from __future__ import division
import math
NITER = 40
def rtbis(f, a, b, xac):
    f1 = f(a)
    fm = f(b)
    if f1*fm >= 0.0:
        raise ValueError('Root must be bracketed for bisection.')
    for i in range(NITER):
        m = (a+b)/2
        fm = f(m)
        if m == 0.0 or (b-a)/2 < xac:
            return m
        if f1*fm > 0.0:
            a = m
            f1 = fm
        else:
            b = m

    raise ValueError('Too many bisections.')

def f(x):
    return math.exp(x) - x -2

if __name__ == '__main__':
    r = rtbis(f, -2, 2, 0.01)
    print('f({})~=0'.format(r))
