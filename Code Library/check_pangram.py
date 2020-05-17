def pangrams(s):
    s=s.replace(' ','')
    s=s.lower()
    if len(s)<26:
        return "not pangram"
    
    d=list(set(s))
    d=sorted(d)
    j=65
    for i in range(len(d)):
        if ord(d[i])!=j and ord(d[i])!=j+32:
            #print(d)
            return "not pangram"
        j+=1
    return "pangram"

s="We promptly judged antique ivory buckles for the next prize"
pangrams(s)
