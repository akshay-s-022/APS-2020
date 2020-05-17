def root(a,i):
    while a[i]!=i:
        i=a[i]
    return 1

def find(a,u,v):
    if root(a,u)==root(a,v):
        return 1
    return 0

def union(a,u,v):
    rootu=root(a,u)
    rootv=root(a,v)
    a[rootu]=rootv
