n = int(input())
s = str(input())
num = 0

while num < n and s[num] == 'o':
    num += 1

print(s[num:])