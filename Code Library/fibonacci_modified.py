def fibonacciModified(t1, t2, n):
    for i in range(n-2):
        t=t1 + t2**2
        t1=t2
        t2=t
    return t

if __name__ == '__main__':

    t1T2n = input().split()

    t1 = int(t1T2n[0])

    t2 = int(t1T2n[1])

    n = int(t1T2n[2])

    result = fibonacciModified(t1, t2, n)

    print(result)
