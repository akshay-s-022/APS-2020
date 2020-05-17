# -*- coding: utf-8 -*-
"""
Created on Fri Mar 27 09:28:57 2020

@author: Akshay
"""




def longest(a,n):
    d=''
    for i in range(n):
        z=0
        for j in range(1,len(a)):
            if a[0][i]==a[j][i]:
                z+=1
        if z==len(a)-1:
            d+=a[0][i]
        else:
            return d
    return d
z=10**4
a=[]
for _ in range(int(input())):
    n=int(input())
    s=input()
    a.append(s)
    z=min(z,n)

print(longest(a,z))
a=["qwrty","qwrrrgeg","qwrwjfow"]
s=longest(a,5)
print(s)





