s = str(input())
w = 0
e = 0
for i in range(len(s)):
    if s[i] == 'W':
        w+=1
    else:
        e+=1
if w > e:
    print("West")
else:
    print("East")