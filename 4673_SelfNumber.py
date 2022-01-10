def selfNumber():
    selfNumber = set(range(1, 10001))
    nonSelfNum = 0
    for i in range(1, 10001):
        if i < 100:
            nonSelfNum = i + (i // 10) + (i % 10)
            selfNumber.discard(nonSelfNum)
        elif i < 1000:
            nonSelfNum = i + (i // 100) + ((i % 100) // 10) + (i % 10)
            selfNumber.discard(nonSelfNum)
        elif i < 10000:
            nonSelfNum = i + (i // 1000) + (i % 1000 // 100) + (i % 100 // 10) + (i % 10)
            selfNumber.discard(nonSelfNum)
    selfNumber = list(selfNumber)
    selfNumber.sort()
    for i in range(len(selfNumber)):
        print(selfNumber[i])

a = selfNumber()