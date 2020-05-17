import heapq as hq
a=[1,2,4,8,2,3,8]
k=int(input())
hq.heapify(a)
print(hq.nsmallest(k,a))
