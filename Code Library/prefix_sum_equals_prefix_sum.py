a=[1,2,7,0,3]
prefix=[0]*(len(a))
suffix=[0]*(len(a))
f=0
for i in range(1,len(a)):
    prefix[i]=prefix[i-1]+a[i-1]
for i in range(len(a)-2,-1,-1):
    suffix[i]=suffix[i+1]+a[i+1]
for i in range(len(a)):
    if suffix[i]==prefix[i]:
        f=1
        break
if f:
    print(a[i])
else:
    print("does not exist")
