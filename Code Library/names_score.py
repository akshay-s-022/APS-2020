a=[]
for q in range(65,91):
    a.append(chr(q))
b=list(range(1,27))
z=[]
for _ in range(int(input())):
    z.append(input())
z=sorted(z)
for _ in range(int(input())):
    q=input()
    s=0
    for i in range(len(q)):
        s+=b[a.index(q[i])]
    print(s*(z.index(q)+1))

