from math import sqrt,floor
def juggler(n):
    a=n
    print(a)
    while a!=1:
        b=0
        if a%2==0:
            b=floor(sqrt(a))
        else:
            b=floor(sqrt(a)*sqrt(a)*sqrt(a))
            print(b)
            a=b

print(juggler(1233))
