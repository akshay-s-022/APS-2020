def find(a,b,s):
    if s[a]==s[b]:
        return 1
    return 0

def union(a,b,s):
    z=s[b]
    for i in range(len(s)):
        if s[i]==s[a]:
            s[i]=z
    return s
