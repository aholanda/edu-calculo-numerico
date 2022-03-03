set origin 0,0
set xrange [0:4]
set grid
x1 = 0.5
x2 = 2.5
f(x) = (x/2) * log(2*x) -1
l(x) = f(x1) + ((f(x2)-f(x1))/(x2-x1)) * (x-x1)
root = 1.664

set terminal epslatex
set output 'zerofal0.tex'
plot 	f(x), \
	l(x), \
	'+' using ($0 == 0 ? root : NaN):(f(root)):(sprintf('f(%.1f)', root)) \
     	with labels offset char 1,-0.2 left textcolor rgb 'blue' \
     	point linestyle 3 notitle

