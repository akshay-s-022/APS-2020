def pickingNumbers(a):
    # Write your code here
    a=sorted(a)
    x=[0]*(max(a)+1)
    for i in a:
        x[i]+=1
    z=0
    for i in range(1,len(x)):
        z=max(z,x[i]+x[i-1])
    return z
        
    


if __name__ == '__main__':

    n = int(input().strip())

    a = list(map(int, input().rstrip().split()))

    result = pickingNumbers(a)

    print(result)
