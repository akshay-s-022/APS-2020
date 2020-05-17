
import math
from itertools import combinations as com


def maximizingXor(l, r):
    l1=list(range(l,r+1))
    h=list(com(l1,2))
    k=[]
    for i in range(len(h)):
        k.append(h[i][0]^h[i][1])
    return max(k)


if __name__ == '__main__':

    l = int(input())

    r = int(input())

    result = maximizingXor(l, r)

    print(result)
