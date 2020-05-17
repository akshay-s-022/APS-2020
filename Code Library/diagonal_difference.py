
def diagonalDifference(arr):
    # Write your code here
    a=0
    b=0
    for i in range(n):
        a+=arr[i][i]
    for i in range(n-1,-1,-1):
        b+=arr[n-i-1][i]
    return abs(a-b)

if __name__ == '__main__':

    n = int(input().strip())

    arr = []

    for _ in range(n):
        arr.append(list(map(int, input().rstrip().split())))

    result = diagonalDifference(arr)

    print(result)
