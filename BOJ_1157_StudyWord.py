words = input()
words = words.upper()
counts = [0] * 92
maxValue, cnt = 0, 1

for i in range(65, 91):
    counts[i] = words.count(chr(i))
for i in range(65, 91):
    if counts[i] > maxValue:
        maxValue = counts[i]
        cnt = 1
    elif counts[i] == maxValue:
        cnt += 1
if cnt > 1:
    print("?")
else:
    print(chr(counts.index(maxValue)))
