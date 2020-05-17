a=[[1,2,3],
   [4,5,6],
   [7,8,9]]
n=3
b=[[0 for i in range(n)] for _ in range(n)]
for i in range(n):
    for j in range(n):
        b[i][j]=a[j][i]
print(b)
