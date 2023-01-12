trial = int(input())

for i in range(0, trial):
    time, S = input().split()
    for j in range(len(S)):
        for k in range(0, int(time)):
            print(S[j], end = '')
    print()
        