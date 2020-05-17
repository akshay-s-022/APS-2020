n=int(input())
for i in range(n):
    for j in range(2*n):
        if i==n//2 and j==n-i-1:
            for k in range(abs(n-i-1-(n-1+i))//2):
                print('*',end=' ')
            
        
        if j==n-i-1 or j==n-1+i:
            print('*',end='')
        else:
            print(' ',end='')
        
        
        
    print()
