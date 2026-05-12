# Sprout OJ No.3035-bearrrrrrrro的綽號們
n = int(input())
dic = {}
for _ in range(n):
    inputs = input().split()
    op = int(inputs[0])
    if op == 1:
        nickname = inputs[1]
        if nickname in dic:
            dic[nickname] += 1
        else:
            dic[nickname] = 1
    elif op == 2:
        nickname = inputs[1]
        if nickname in dic:
            dic[nickname] -= 1
        if dic[nickname] == 0:
            del dic[nickname]
    elif op == 3:
        ans = list(dic.items())
        ans.sort()
        for key, value in ans:
            print(key, value)
    elif op == 4:
        print(len(dic))