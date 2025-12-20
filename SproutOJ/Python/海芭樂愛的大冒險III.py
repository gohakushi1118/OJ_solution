# Sprout OJ No.3052-海芭樂愛的大冒險III
n = int(input())
score = {}
for _ in range(n):
    name, status = input().split()
    if status == "AC":
        if name in score:
            score[name] += 1
        else:
            score[name] = 1
    
max_score = 0
ans = ""

for name in score:
    if score[name] >= max_score:
        max_score = score[name]
        ans = name
print(ans)