


'''

    *        * * *   * * * * 
   * *       *   *   *
  * * *      * * *   * * * *
 *     *     *             *
*       *    *       * * * *
'''
def print_APS(l):
    for i in range(len(l)):
        for j in range(len(l[0])):
            print(l[i][j],end='')
        print()
    
t=int(input())
for _ in range(t):
   n=int(input())
   l=[[' ' for i in range(4*n+1)] for _ in range(n)]
   for i in range(n):
     for j in range(4*n+1):
        if j==n-i-1 or j==n-1+i:
             l[i][j]='*'
        if i==0 or i==n//2:
            if j==2*n:
                for k in range(j,j+2*n+1,2):
                    l[i][k]='*'
        if i==n//2:
            for k in range(n-i-1,n+i-1,2):
                l[i][k]='*'
        if j==2*n:
            l[i][j]='*'
        if j==3*n-1:
            if i>=1 and i<n//2:
                l[i][j]='*'
        if j==3*n+1 and i<=n//2:
            l[i][j]='*'
        if j==4*n and i>n//2:
            l[i][j] ='*'
        if i==n-1 and j==3*n+1:
            for k in range(j,j+n,2):
                l[i][k]='*'
   print_APS(l)    






