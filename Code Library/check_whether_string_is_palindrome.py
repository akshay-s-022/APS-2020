def palindrome(s):
    s1=''
    for i in range(len(s)-1,-1):
        s1+=s[i]
    if s==s1:
        return "YES"
    return"NO"

print(palindrome("ASDSA"))
