#!/usr/bin/env python
# coding: utf-8

# In[9]:


from collections import deque

n, m, v = map(int, input().split())

matrix = [[0] * (n+1) for i in range(n+1)]
for i in range(m):
    a, b = map(int, input().split())
    matrix[a][b] = 1
    matrix[b][a] = 1
    
visited = [0] * (n+1)

def bfs(matrix, v):
    que = deque()
    que.append(v)
    visited[v] = 1
    
    while len(que) != 0:
        next = que.popleft()
        print(next, end = ' ')
        for i in range(1, n+1):
            if matrix[next][i] == 1 and visited[i] == 0:
                que.append(i)
                visited[i] = 1

def dfs(matrix, v):
    visited[v] = 1
    print(v, end = ' ')
    for i in range(1, n+1):
        if matrix[v][i] == 1 and visited[i] == 0:
            dfs(matrix, i)
            
if __name__ == '__main__':

    dfs(matrix, v)
    print()
    
    visited = [0] * (n+1)
    
    bfs(matrix, v)
        


# In[ ]:





# In[ ]:




