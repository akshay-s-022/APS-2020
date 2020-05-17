#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the findDigits function below.
def findDigits(n):
    c=int(0)
    i=int(0)
    m=n
    while m>0:
        k=m%10
        if k!=0:
            if n%k==0:
                c=c+1
        m=m//10
    return c


if __name__ == '__main__':

    t = int(input())

    for t_itr in range(t):
        n = int(input())

        result = findDigits(n)

        print(result)
