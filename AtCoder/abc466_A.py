n = int(input())
num = list(map(int, input().split(" ")))
flag = 1

for i in range(len(num)):
    if num[i] >= 0:
        flag = 0
        break

if flag == 0:
    print("No")
else:
    print("Yes")
