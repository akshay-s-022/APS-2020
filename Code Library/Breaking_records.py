#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the breakingRecords function below.
def breakingRecords(scores):
    m=scores[0]
    n=scores[0]
    j=0
    
    d=0
    for i in range(1,len(scores)):
        if scores[i]>m:
            m=scores[i]
            j+=1
            
        if scores[i]<n:
            n=scores[i]
            d+=1
    return j, d

if __name__ == '__main__':

    n = int(input())

    scores = list(map(int, input().rstrip().split()))

    result = breakingRecords(scores)

    print(result)
