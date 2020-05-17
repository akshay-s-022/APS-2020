n=int(input())
a=[]
for i in range(n):
    a.append(list(map(int,input().split())))

m=0
for i in range(n):
    if a[i].count(1)>m:
        m=a[i].count(1)
        ind=i
print("row =%d"%ind)
print(m)
