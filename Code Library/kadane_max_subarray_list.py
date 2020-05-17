a=[1,5,-6,3,-2,4,-10]
s=0
m=0
st=0
ed=0
for i in range(len(a)):
    s+=a[i]
    if m<s:
        m=s
        start=st
        end=i
    if s<0:
        s=0
        st=i+1
print(m)
print(start,end,a[start:end+1])
