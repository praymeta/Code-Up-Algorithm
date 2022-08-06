destination = int(input())
cnt, i = 1, 0

while True:
    if destination == 1:
        print(1)
        break
    elif destination <= 1 + i + (6 * cnt):
        print(cnt + 1)
        break
    else:
        i += 6 * cnt
        cnt += 1
