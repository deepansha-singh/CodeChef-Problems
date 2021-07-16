# cook your dish here
def solve():
    words = input()
    k = int(words[0])
    words = words[2:].split()
    # print(words)
    # flag = 0
    lang1 = 'abcdefghijklm'
    lang2 = 'NOPQRSTUVWXYZ'
    for word in words:
        # print(set(word))
        if (set(word).issubset(lang1)) or (set(word).issubset(lang2)):
            continue
        else:
            print("NO")
            return
    print("YES")

        # if word.islower():
        #     for char in word:
        #         if 'a' <= char <= 'm':
        #             continue
        #         else:
        #             print("NO")
        #             return
        # elif  word.isupper():
        #     for char in word:
        #         if 'N' <= char <= 'Z':
        #             continue
        #         else:
        #             print("NO")
        #             return
        # else:
        #     print("NO")
        #     return
        # print('YES')
        # return

try:
    t = int(input())
    
    while t:
        solve()
        t -= 1
        
except:
    pass