def sum_digit(n):
    d=0
    while n!=0:
        d+=n%10
        n//=10
    return d
def fact(n):
    f=1
    while n>0:
        f=f*n
        n-=1
    return f

for _ in range(int(input())):
    n=int(input())
    print(sum_digit(fact(n)))
