n = int(input())
num = list(map(int, input().split()))

n1 = (n + 1)*n / 2
n2 = sum(num)

ans = n1 - n2

print(f"{ans:.0f}")