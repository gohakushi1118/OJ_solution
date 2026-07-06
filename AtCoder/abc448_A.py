n, m = map(int, input().split(" "))

seq = list(map(int, input().split(" ")))

for i in range(n):
    if m > seq[i]:
        print("1")
        m = seq[i]
    else:
        print("0")