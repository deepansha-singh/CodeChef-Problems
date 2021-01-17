try:
    t = int(input())

    while t:
        a, b = [int(k) for k in input().split()]
        print(a % b)
        t -= 1

except:
    pass
