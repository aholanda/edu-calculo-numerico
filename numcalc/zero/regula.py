import math
import sys
def regula(f, a, b, eps=0.0001, maxit=40):
    if f(a)*f(b) >= 0.0:
        sys.exit("f(a)f(b)<0=false")
    fa, fb = f(a), f(b)
    if fb < 0.0: 
        b, a = a, b 
        fb, fa = fa, fb
    dx = b-a
    for i in range(maxit):
        m = a + dx*fa/(fa-fb)
        fm = f(m)
        if (fm < 0.0):
            d, a, fa = a-m, m, fm
        else:
            d, b, fb = b-m, m, fm
        dx = b-a
        if fm == 0.0 or abs(d) < eps:
            return m
    
    sys.exit("Limit of {} iterations exceeded."
             .format(maxit))

def f(x):
    return math.exp(x) - 2*x -5

if __name__=='__main__':
    r = regula(f, 1.0, 4.0) # 2.2516
    print("f({:.4})~=0".format(r))
