a=[7,5,6,200,201,202,203,204,205,206,207,208,209,2104,100,1,2,3]
print(a)
a=list(set(a))
print(a)
h=[0]*(max(a)+1)
for i in a:
    h[i]+=1
m=0
i=1
for i in range(1,len(h)):
    c=1
    j=i
    while j<len(h) and h[j-1]==1 and h[j]==1:
        j+=1
        c+=1
    i=j
    m=max(m,c)
print(m)
