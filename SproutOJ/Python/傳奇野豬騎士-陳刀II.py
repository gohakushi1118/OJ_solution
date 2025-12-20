# Sprout OJ No.3041-傳奇野豬騎士--陳刀II
artical = input()
list1 = ""
wherestart = artical.find("陳刀:「")
if wherestart >= 0:
    for time in range(wherestart+4):
        artical = artical[1:]
    wheregg = artical.find("」")
    if wheregg >= 0:
        whereend = artical.index("」")
        for u in range(whereend):
            if u != "「":
                list1 += artical[u]
        if list != "":
            print(list1)
        else:
            print("QAQ")
    else:
        print("QAQ")
else:
    print("QAQ")