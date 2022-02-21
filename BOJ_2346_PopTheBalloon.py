#!/usr/bin/env python
# coding: utf-8

# In[2]:


n = int(input())
index = 0
result = []

inBalloon = list(map(int, input().split()))
balloonIndex = [x for x in range(1, n + 1)]

temp = inBalloon.pop(index)
result.append(balloonIndex.pop(index))

while len(inBalloon) > 0:
    if temp < 0:
        index = (index + temp) % len(inBalloon)
    else:
        index = (index + (temp - 1)) % len(inBalloon)
    temp = inBalloon.pop(index)
    result.append(balloonIndex.pop(index))
    
for i in result:
    print(i, end = ' ')

