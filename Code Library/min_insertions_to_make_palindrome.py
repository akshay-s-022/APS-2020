s1=input()
n=len(s1)
s2=''
for i in range(len(s1)-1,-1,-1):
    s2+=s1[i]

lcs=[[0 for _ in range(n+1)] for _ in range(n+1)]
for i in range(n+1):
    lcs[i][0]=1
    lcs[0][i]=1

for i in range(1,n+1):
    for j in range(1,n+1):
        if s1[i-1]==s2[j-1]:
            lcs[i][j]=lcs[i-1][j-1]+1
        else:
            lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1])

print(n-lcs[n][n])
