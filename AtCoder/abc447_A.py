n, m = map(int, input().split(" "))


if n == m and n != 1:
    print("No")
else:
    if n % 2 == 0 and (n // 2) >= m:
        print("Yes")
    elif n % 2 == 1 and (n // 2) + 1 >= m:
        print("Yes")
    else:
        print("No")