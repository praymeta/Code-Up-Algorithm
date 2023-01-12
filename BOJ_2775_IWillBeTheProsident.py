def listSum(apart, n):
    blank = []
    sum = 0
    for i in range(0, n):
        blank.append(sum + apart[i])
        sum += apart[i]
    apart = blank
    return apart

t = int(input())
for i in range(0, t):
    apart = []
    k = int(input())
    n = int(input())
    for j in range(1, n + 1):
        apart.append(j)
    if k == 0:
        print(apart[n - 1])
    else:
        for floor in range(1, k + 1):
            apart = listSum(apart, n)
    print(apart[n - 1])
