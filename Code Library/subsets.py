s="abc"
n=len(s)
for i in range(1<<n):
    for j in range(n):
        if i&(1<<j):
            print(s[j],end=' ')
    print()
