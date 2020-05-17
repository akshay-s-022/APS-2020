def update(i,val):
    while i<=n:
        bit[i]*=val
        i+=i&-i

def product(i):
    s=1
    while i>0:
        s*=bit[i]
        i-=i&-i
    return s

n=int(input())
a=[]
bit=[1]*(n+1)
for i in range(1,n+1):
    x=int(input())
    a.append(x)
    update(i,x)

    

        
    
for i in range(1,n+1):
    update(i,a[i-1])    
    

print(product(5))
print(product(4)//product(2-1))
