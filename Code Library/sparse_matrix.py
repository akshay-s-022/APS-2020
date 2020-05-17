n=int(input())
m=int(input())
a=[]
for _ in range(n):
    a.append(list(map(int,input().split())))

c=0
for i in range(n):
    c+=a[i].count(0)

if c>n*m//2:
    print("Sparse matrix")
else:
    print("Not sparse")
