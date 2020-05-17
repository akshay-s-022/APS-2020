a=[1,3,4,6,2,67]
c=0
for i in range(len(a)):
    if a[i]&1:
        c+=1
print(c*(len(a)-c))
