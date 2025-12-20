# Sprout OJ No.3055-凌晨4點的修羅道
score_board = {}
while True:
    k = input()
    if k=="DATA_INPUT_END":
        break
    k = k.split()
    score_board[k[0]] = k[1]
while True:
    k = input()
    if k=="END":
        break
    if k in score_board:
        print(score_board[k])
    else:
        print("gg")