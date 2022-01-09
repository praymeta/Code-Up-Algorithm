numbers = list(map(int, input().split()))

def solution(numbers):
    answer = []
    for i in range(len(numbers)):
        for j in range(len(numbers)):
            if i != j:
                answer.append(numbers[i] + numbers[j])

    answer = set(answer)
    answer = list(answer)
    answer.sort()

    return answer

answer = solution(numbers)
print(answer)
