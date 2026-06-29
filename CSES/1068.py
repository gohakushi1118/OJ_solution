n = int(input())
num = [n]

while n != 1:
    if n % 2 != 0:
        n = n * 3 + 1
        num.append(int(n))
    else:
        n = n / 2
        num.append(int(n))

print(*num)
