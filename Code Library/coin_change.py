def coin_change(n, c):
    a=[0]*(n+1)
    a[0]=1
    for i in range(len(c)):
        for j in range(c[i],n+1):
            a[j]=a[j]+a[j-c[i]]
    return a[-1]

n=4
c=[1,2,3]
print(coin_change(n,c))
