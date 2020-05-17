ss=[1,2,3,5,7]
req_sum=10
n=len(ss)
a=[[0 for _ in range(req_sum+1) ] for _ in range(n+1)]
for i in range(n+1):
    a[i][0]=1
for i in range(1,n+1):
    for j in range(1,req_sum+1):
        if a[i-1][j]==1:
            a[i][j]=1
        else:
            if ss[i-1]>j:
                a[i][j]=0
            else:
                a[i][j]=a[i-1][j-ss[i-1]]

print(a)
        
