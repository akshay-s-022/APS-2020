def divisibleSumPairs(n, k, ar):
    c=0
    for i in range(n):
        for j in range(i):
            if (ar[i]+ar[j])%k==0:
                c+=1
    return c


if __name__ == '__main__':

    nk = input().split()

    n = int(nk[0])

    k = int(nk[1])

    ar = list(map(int, input().rstrip().split()))

    result = divisibleSumPairs(n, k, ar)

    print(result)
