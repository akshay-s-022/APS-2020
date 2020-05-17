def sockMerchant(n, ar):
    b=set(ar)
    b=list(b)
    a=[]
    for i in range(len(b)):
        a.append(ar.count(b[i]))
    s=0
    for i in range(len(a)):
        s+=a[i]//2
    return s
        
        
        
        


if __name__ == '__main__':

    n = int(input())

    ar = list(map(int, input().rstrip().split()))

    result = sockMerchant(n, ar)
    print(result)

    
