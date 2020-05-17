from math import sqrt
a=1
b=2
c=1

d=b*b-4*a*c

if d<0:
    print("Imaginary roots")
elif d>0:
    s1=-b+sqrt(d)/(2*a)
    s2=-b-sqrt(d)/(2*a)
    print(s1,s2)
else:
    print(-b//(2*a),-b//(2*a))
