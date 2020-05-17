def root(a,i):
    while a[i]!=i:
        i=a[i]
    return 1

def find(a,u,v):
    if root(a,u)==root(a,v):
        return 1
    return 0

def weighted_union(a,size,u,v):
    rootu=root(a,u)
    rootv=root(a,v)
    if size[rootu]<size[rootv]:
        a[rootu]=a[rootv]
        size[rootv]+=size[rootu]
    else:
        a[rootv]=a[roota]
        size[rootu]+=size[rootv]
