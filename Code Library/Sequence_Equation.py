def permutationEquation(p):
    x=list(range(1,len(p)+1))
    s=[]
    for i in range(len(x)):
        for j in range(len(p)):
            if x[i]==p[p[j] -1]:
                s.append(j+1)
    return s
p=[1,2,3,4]
permutationEquation(p)
