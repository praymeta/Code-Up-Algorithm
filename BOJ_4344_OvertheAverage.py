def overAverage(grades):
    cnt = 0
    average = (sum(grades) - grades[0]) / (len(grades) - 1)

    for i in range(1, len(grades)):
        if(grades[i] > average):
            cnt = cnt + 1
    overPercent = cnt / (len(grades) - 1) * 100
    return overPercent

trial = int(input())
for i in range(0, trial):
 grades = list(map(float, input().split()))
 result = overAverage(grades)
 a = format(result, ".3f")
 b = '%'
 print(a + b)
