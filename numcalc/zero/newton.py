from __future__ import division
import sys
def newton(fd, a, b, eps=0.0001, maxit=40):
    m=0.5*(a+b)
    for i in range(maxit):
        f, df = fd(m)
        dx=f/df
        m -= dx
        if (a-m)*(m-b) < 0.0:
            sys.exit('Jumped out of brackets.')
        if abs(dx) < eps:
            return m

    sys.exit('Limit of {} iterations exceeded.'.format(maxit))

def fd(x):
    return x**2 - 2*x -5, 2*x -2

# r = 3.4494897
r = newton(fd, 1.0, 4.0)
print("f({:.4})~=0".format(r))
