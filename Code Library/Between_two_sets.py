def getTotalX(a, b):
    x=a[len(a)-1]
    y=b[0]+1
    f=0
    s=0
    d=0
    for i in range(x,y):
        f=0
        s=0
        flag=0
        fl=0
        for j in range(len(a)):
            if i%a[j]==0:
                f+=1
        if f==len(a):
            flag=1

        for k in range(len(b)):
            if b[k]%i==0:
                s+=1
        if s==len(b):
            fl=1

        if flag==1 and fl==1:
            d+=1

    return d

if __name__ == '__main__':

    first_multiple_input = input().rstrip().split()

    n = int(first_multiple_input[0])

    m = int(first_multiple_input[1])

    arr = list(map(int, input().rstrip().split()))

    brr = list(map(int, input().rstrip().split()))

    total = getTotalX(arr, brr)

    print(total)
