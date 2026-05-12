# Sprout OJ No.3041-超級貓貓星際漫遊-1
a, b = map(int, input().split(" "))

if (a + 1)*a / 2 <= b:
    print("Maow oil enough")
else:
    print("Maow oil not enough")