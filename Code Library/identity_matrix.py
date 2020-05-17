def identity(matrix):
    for i in range(n):
        for j in range(n):
            if i==j:
                if matrix[i][j]!=1:
                    return "Not identity"
            else:
                if matrix[i][j]!=0:
                    return "Not identity"
    return "Identity"



n=int(input())
matrix=[]
for i in range(n):
    matrix.append(list(map(int,input().split())))
print(identity(matrix))
