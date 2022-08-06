#!/usr/bin/env python
# coding: utf-8

# In[15]:


trial = int(input())

xy = [[1] * 101 for _ in range(101)]
for i in range(1, trial + 1):
    x, y, d, g = map(int, input().split())
    move = [d]
    for j in range(1, g + 1):
        move += [(k + 1) % 4 for k in move[::-1]]
    xy[x][y] = 0
    for j in move:
        if j == 0:
            x += 1
            xy[x][y] = 0
        elif j == 1:
            y -= 1
            xy[x][y] = 0
        elif j == 2:
            x -= 1
            xy[x][y] = 0
        else:
            y += 1
            xy[x][y] = 0
            
cnt = 0
for i in range(0, 100):
    for j in range(0, 100):
        if xy[i][j] + xy[i+1][j] + xy[i][j+1] + xy[i+1][j+1] == 0:
            cnt += 1
print(cnt)

