# Sprout OJ No.3015-愛吃拉麵的小暘教授
N = int(input())
roman = {}
happy = {}
count = {}
test = {}
final = list()
for i in range(N):
    si , ai , bi = input().split()
    ai = int(ai)
    bi = int(bi)
    happy[si] = 0
    test[si] = 0
    roman[si] = ai
    count[si] = bi
M = int(input())
for j in range(M):
    roroman = input()
    if roroman not in roman:
        print("Ramen Not Found")
        continue
    if happy[roroman] == 0:
        print("Yummy")
        happy[roroman]+=1
        test[roroman] = j+1
        continue
    if roroman in roroman and happy[roroman] != 0 and (j+1)-test[roroman] >= roman[roroman]:
        print("Yummy")
        happy[roroman] += 1
        test[roroman] = j+1
        continue
    else:
        print("Too Greasy!")
counting = list(happy.items())
counting.sort()
for k , v in counting:
    print(k,v)
for k in roman:
    point = happy[k]*count[k]
    final.append(point)
print(sum(final))