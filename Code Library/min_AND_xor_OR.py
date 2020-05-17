for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    a=sorted(a)
    m =  999999
    for i in range(len(a)-1): 
        m = min(m, a[i] ^ a[i + 1])
      
    print(m)
 
 
