import unittest

from numcalc.zero.bisection import bisect
from numcalc.zero.regula import regula

def f(x):
    return x**2 - 2*x - 2

class TestZero(unittest.TestCase):
    def test_bisect(self):
        r = bisect(f, 1, 4)
        self.assertEqual(round(r, 3), 2.732)

    def test_regula(self):
        r = regula(f, 1, 4)
        self.assertEqual(round(r, 3), 2.732)

if __name__ == '__main__':
    unittest.main()
