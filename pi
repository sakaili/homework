# -*- coding: utf-8 -*-
"""
Spyder Editor

This is a temporary script file.
"""
# pi.py
import random
from math import sqrt
DARTS = 5500000# total trying times
hits = 0
for i in range(1, DARTS):
    x, y = random.uniform(0.0,1.0), random.uniform(0.0,1.0);
    dist = sqrt(x**2 + y**2)
    if dist <= 1.0:
        hits = hits + 1
pi = 4 * (hits/DARTS)
print('Value of PI is %s' % pi)


