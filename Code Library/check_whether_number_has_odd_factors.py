import math
def check_odd_factors(n):
    a=int(math.sqrt(n))
    if n==a*a:
        return "Number has odd factors"
    else:
        return "Number does not have odd number of factors"
print(check_odd_factors(200))
    
    
    
