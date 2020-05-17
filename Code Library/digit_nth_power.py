def s(a,b):
    d=0
    while a!=0:
        f=(a%10)**b
        d=d+f
        a=a//10
    return d


n=int(input())
s1=0
for i in range(2,10**6):
    if s(i,n)==i:
        s1+=i
print(s1)
        
