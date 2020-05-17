def sum_s(n):
    s=0
    while n:
        s+=(n%10)**2
        n//=10
    return s

def happy(n):
    if n<10:
        if n==1:
            return "YES"
        else:
            return "NO"
    n=sum_s(n)
    #print(n)
    return happy(n)


n=82
print(happy(n))
