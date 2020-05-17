n=int(input())
a=[]

for i in range(n+1):
    a.append(i)


for i in range(2,n+1):
    a[i]=0
    for j in range(1,int(i//2) +1):
        a[i]=max(a[i],j*(i-j),j*a[i-j])
print(a)
