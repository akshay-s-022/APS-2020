a=[5,4,7,3,9,2]
k=13
for i in range(len(a)):
    s=k-a[i]
    if s in a:
        break
print(a.index(s),i)
    
