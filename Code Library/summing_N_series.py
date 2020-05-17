def summingSeries(n):
    return n**2%(10**9 + 7)
   

if __name__ == '__main__':

    t = int(input())

    for t_itr in range(t):
        n = int(input())

        result = summingSeries(n)

        print(result)
