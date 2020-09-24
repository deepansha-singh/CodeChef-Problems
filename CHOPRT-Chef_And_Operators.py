try:
     t = int(input())

     while t:
        a, b = [int(k) for k in input().split()]
        if a < b:
            print('<')
        elif a > b:
            print('>')
        else:
            print('=')
        t -= 1

except:
    pass

