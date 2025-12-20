# Sprout OJ No.3087-差太多了吧
n = eval(input())
m = eval(input())
if n==0 and m==0:
    pass
else:
    list1 = []
    for i in range(n):
        for j in range(m):
            list1.append(eval(input()))
    maxmu = []
    minmu = []
    fminmu = []
    for i in range(n):
        maxmu.append(max(list1[i*m:(i*m)+m]))
        minmu.append(min(list1[i*m:(i*m)+m]))
        fminmu.append(maxmu[i]-minmu[i])
        print(maxmu[i]-minmu[i])
    print(sorted(fminmu)[0])