def intReverse(num):
    h = num // 100
    t = (num % 100) // 10
    o = (num % 10) % 10
    return (o * 100) + (t * 10) + h

numA, numB = map(int,input().split())
numA = intReverse(numA)
numB = intReverse(numB)
if numA > numB:
    print(numA)
else:
    print(numB)
