# Sprout OJ No.2005-修羅道之佛
num = list(input().split())
n = input()
for i , j in enumerate(num):
    if j == n:
        print(num.index(n,i))