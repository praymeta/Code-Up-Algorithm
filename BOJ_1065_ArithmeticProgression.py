def isAP(num):
    cnt = 0

    for i in range(1, num + 1):
        if i < 100:
            cnt += 1
        else:
            O = i % 10
            T = (i % 100) // 10
            H = i // 100
            if (H - T) == (T - O):
                cnt += 1
    return cnt

num = int(input())
print(isAP(num))
