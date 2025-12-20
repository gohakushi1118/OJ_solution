# Sprout OJ No.3028-野豬騎士來囉 II
N = int(input())
record = list(map(int, input().split()))
t = 0
for i in range(1,N+1):
    if record.count(i) % 2 != 0 :
        t = t + 1

print(t)
