def sum_digit(n):
    n=int(n)
    s=0
    while n:
        s+= n%10
        n//=10
    return str(s)
def superDigit(n):
    if len(n)==1:
        s=0
        n=(int(n))
        while s!=1:
            n=sum_digit(n)
            s=len(n)
        return n
    return superDigit(sum_digit(n))
n=123456
print(superDigit(str(n)))
