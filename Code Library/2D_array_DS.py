def hourglassSum(arr):
    z=[]
    for i in range(len(arr)-2):
        s=0
        for j in range(len(arr[0])-2):
            s=0
            s=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]                     +arr[i+2][j+2]
            z.append(s)
    return max(z)

if __name__ == '__main__':

    arr = []

    for _ in range(6):
        arr.append(list(map(int, input().rstrip().split())))

    result = hourglassSum(arr)

    print(result)
