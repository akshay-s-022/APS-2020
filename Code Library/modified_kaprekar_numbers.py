def kaprekarNumbers(p, q):
    l=[]
    for i in range(p,q+1):
        d=len(str(i))
        a=str(i**2)
        s=a[:len(a)-d]
        s1=a[len(a)-d:]
        if s!='':
            if int(s)+int(s1)==i:
                l.append(i)
        else:
            if int(s1)==i:
                l.append(i)
    if len(l)!=0:
        for i in range(len(l)):
            print(l[i],end=' ')
    else:
        print("INVALID RANGE")





if __name__ == '__main__':
    p = int(input())

    q = int(input())

    kaprekarNumbers(p, q)
