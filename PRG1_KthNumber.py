array = list(map(int, input("array : ").split()))
commands = [list(map(int, input("commands : ").split())) for _ in range(3)]

def solution(array, commands):
    answer = []
    for i in range(len(commands)):
        a = sorted(array[commands[i][0]-1:commands[i][1]])
        answer.append(a[commands[i][2]-1])
    return answer

answer = solution(array, commands)
print(answer)
