s = list(input())
ans = 0
count = 1
for i in range(0, len(s)-1):
    if s[i] == s[i+1]:
        count += 1
    else:
        count = 1
    ans = max(ans, count)
print(max(ans, count))