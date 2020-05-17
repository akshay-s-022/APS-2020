def theGreatXor(x):
    s=0
    n=1
    while x!=0:
        if not x&1:
            s+=n
        n*=2
        x//=2
    return s
        

if __name__ == '__main__':

    q = int(input())

    for q_itr in range(q):
        x = int(input())

        result = theGreatXor(x)

        print(result)
