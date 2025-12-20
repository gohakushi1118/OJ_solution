# Sprout OJ No.3031-修羅道之怪異的範圍
a,b,c = map(int,input().split())
t = 0

if a == c:
    print(c)
elif b == 0:
    print("><")
elif (c-a) % b != 0:
    print("><")
elif b > 0 and a > c:
    print("><")
elif b < 0 and a < c:
    print("><")

else:
    while True:
        g = ((a+(b)*t))
        print(g,end=" ")
        t += 1
        if g == (c - b):
            print(c)
            break