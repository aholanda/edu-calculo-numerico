from __future__ import division
import math
N = 40
def rtbis(f, x1, x2, xac):
    if f(x1)*f(x2) >= 0.0:
        raise ValueError('f(x1)f(x2)>=0 = False')
    for i in range(N):
        xm = (x1+x2)/2
        y = f(xm)
        if y == 0.0 or abs(x2-x1)/2 < xac:
            return xm
        if f(x1)*y > 0.0:
            x1 = xm
        else:
            x2 = xm

    raise ValueError('Limit of {} iterations exceeded.'.format(N))

def f(x):
    return math.exp(x) - x -2

if __name__ == '__main__':
    r = rtbis(f, -2, 0, 0.01)
    print('f({})~=0'.format(r))
