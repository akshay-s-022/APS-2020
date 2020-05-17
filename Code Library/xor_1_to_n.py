#xor of numbers from 1 to n
def xor(n):
    a=n&3
    if a==0:
        return n
    if a==1:
        return 1
    if a==2:
        return n+1
    return 0

n=10
print(xor(n))
        
