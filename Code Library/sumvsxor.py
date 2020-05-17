def sumXor(n):
    if n==0:
        return 1
    else:
        return 2**(bin(n).count('0')-1)
sumXor(10)
