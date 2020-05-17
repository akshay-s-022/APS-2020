#!/bin/python3

import os
import sys

#
# Complete the getMoneySpent function below.
#
def getMoneySpent(keyboards, drives, b):
    s=[]
    c=[]
    for i in range(len(keyboards)):
        for j in range(len(drives)):
            s.append(keyboards[i]+drives[j])
    for i in range(len(s)):
        if s[i]<=b:
            c.append(s[i])
    if c==[]:
        return -1
    else:
        return max(c)

        

if __name__ == '__main__':

    bnm = input().split()

    b = int(bnm[0])

    n = int(bnm[1])

    m = int(bnm[2])

    keyboards = list(map(int, input().rstrip().split()))

    drives = list(map(int, input().rstrip().split()))

    moneySpent = getMoneySpent(keyboards, drives, b)

    print(moneySpent)
