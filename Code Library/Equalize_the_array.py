def equalizeArray(arr):
    a=[0]*(max(arr)+1)
    for i in arr:
        a[i]+=1
    return sum(a)-max(a)

n=int(input())
a=list(map(int,input().split()))
equaliseArray(arr)
