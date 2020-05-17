n=int(input())
a=[]
for i in range(n):
    a.append(list(map(int,input().split())))

m=0
for i in range(n):
    m=max(m,sum(a[i]))
print(m)
