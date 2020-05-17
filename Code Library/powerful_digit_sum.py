def sum_digit(n):
    d=0
    while n>0:
        d+=n%10
        n//=10
    return d
n=int(input())
a=0
for i in range(2,n):
    for j in range(2,n):
        s=sum_digit(i**j)
        if s>a:
            a=s
print(a)
            
        
