trial = int(input())
howManyGroup = 0
for i in range(trial):
    word = input()
    notGroup = 0
    for j in range(len(word) - 1):
        if word[j] != word[j + 1]:
            newWord = word[j + 1:]
            if newWord.count(word[j]) != 0:
                notGroup += 1
    if notGroup == 0:
        howManyGroup += 1
print(howManyGroup)
