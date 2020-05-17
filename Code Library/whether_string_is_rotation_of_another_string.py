s1="abcde"
s2="cdeab"

s1=s1+s1
try:
    print(s1.index(s2))
except Exception:
    print("s2 is not a rotation of s1") 
