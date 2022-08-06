X = int(input())
temp, cnt = 0, 1

while True:
    if X <= (temp + cnt):
        if cnt % 2 == 0:
            print(X - temp, '/', (cnt + 1) - (X - temp), sep = '')
            break
        else:
            print((cnt + 1) - (X - temp), '/', (X - temp), sep = '')
            break
    else:
        temp += cnt
        cnt += 1
