#!/bin/python3

import os
import sys

#
# Complete the timeConversion function below.
#
def timeConversion(s):
    q=s[0]
    w=s[1]
    q=q+w
    p=int(q)
    if s[-2:]=='PM':
        if s[:2]!='12':
            p=int(s[:2])+12
            a=str(p)
        

            o=s.replace(s[:2],a)
            return o[:len(o)-2]
        else:
            return s[:len(s)-2]
    elif s[-2:]=='AM':
        a=s[:2]
        if int(a)==12:
            a='00'
        o=s.replace(s[:2],a)
        return o[:len(o)-2]



        

    

if __name__ == '__main__':

    s = input()

    result = timeConversion(s)
print(result)
