
import math
import os
import random
import re
import sys

def freq(n,a,b):
    return a.count(n)==b.count(n)

def missingNumbers(a, b):
    p=[]
    c=list(set(a))
    d=list(set(b))
    if len(c)>len(d):
        for i in c:
            if (i in d) and freq(i,a,b):
                continue
            else:
                p.append(i)
    else:
        for i in d:
            if (i in c) and freq(i,a,b):
                continue
            else:
                p.append(i)

    n=list(set(p))
    n=sorted(n)
    return n





        


if __name__ == '__main__':

    n = int(input())

    arr = list(map(int, input().rstrip().split()))

    m = int(input())

    brr = list(map(int, input().rstrip().split()))

    result = missingNumbers(arr, brr)

    print(result)
