n=10
k=2
c=[[0 for _ in range(k+1)] for _ in range(n+1)]
for i in range(n+1):
    c[i][0]=1
for i in range(k+1):
    c[i][i]=1
for i in range(n+1):
    for j in range(min(i,k)+1):
        if j==0 or i==j:
            c[i][j]=1
        else:
            c[i][j]=c[i-1][j-1]+c[i-1][j]
print(c[n][k])
