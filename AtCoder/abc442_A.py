s = str(input())
sum = 0

for i in range(len(s)):
    if s[i] == "i" or s[i] == "j":
        sum+=1

print(sum)
