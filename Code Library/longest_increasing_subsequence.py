def longest_increasing_subsequence(a):
    lis=[0]*(len(a)+1)
    lis[0]=1
    for i in range(len(a)):
        for j in range(i):
            if a[i]>a[j] and lis[i]<lis[j]+1:
                lis[i]=lis[j]+1
    print(lis[len(a)-1])

if __name__=="__main__":
    a=[1,4,7,2,5,8]
    longest_increasing_subsequence(a)
