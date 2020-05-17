#!/bin/python3

import math
import os
import random
import re
import sys

def sum_digit(n):
    s=0
    while n!=0:
        s+=n%10
        n//=10
    return s


if __name__ == '__main__':
    n = int(input())
    a=[]
    for i in range(1,n+1):
        if n%i==0:
            a.append(i)
    b=[]
    for i in range(len(a)):
        b.append(sum_digit(a[i]))
    print(a[b.index(max(b))])


    

