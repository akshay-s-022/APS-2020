def minimumAbsoluteDifference(arr):
    c=[]
    c=sorted(arr)
    z=[]
    for i in range(1,len(c)):
        z.append(abs(c[i]-c[i-1]))
    return min(z)

if __name__ == '__main__':

    n = int(input())

    arr = list(map(int, input().rstrip().split()))

    result = minimumAbsoluteDifference(arr)

    print(result)
