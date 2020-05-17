def permutation(s,l,r):
    if l==r:
        print(s)
    if l<r:
        for i in range(l,r+1):
            s[l],s[r]=s[r],s[l]
            permutation(s,l+1,r)
            s[l],s[r]=s[r],s[l]

s="ABC"
permutation(s,0,len(s)-1)
    
