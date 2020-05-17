def alternatingCharacters(s):
    d=0
    for i in range(1,len(s)):
        if s[i]==s[i-1]:
            d+=1
    return d

if __name__ == '__main__':

    q = int(input())

    for q_itr in range(q):
        s = input()

        result = alternatingCharacters(s)

        pirint(result)
