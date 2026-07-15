n, m = map(int, input().split(" "))
a, b = map(int, input().split(" "))

if (n + 99 >= a) and (a >= n) and (m + 99 >= b) and (b >= m):
    print("Yes")
else:
    print("No")
