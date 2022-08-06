trial = int(input())

def score(result):
    temp = 0
    sum = 0
    for i in range(len(result)):
        if result[i] == 'O':
            temp = temp + 1
            sum = sum + temp
        else:
            temp = 0
    return sum 

for i in range(0, trial):
    result = input()
    answer = score(result)
    print(answer)
