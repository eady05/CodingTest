import sys
from collections import deque 
input = sys.stdin.readline
n,m = map(int, input().split())
miro = [input().strip() for _ in range(n)]

#(0,0)에서 (m-1,n-1) 로 바꿔서 풀기

visited = [[0]*m for _ in range(n)]
dy = [1,0,-1,0]
dx = [0,1,0,-1]

def bfs(y,x):
  queue = deque([(y,x)])
  visited[y][x] = 1
  while queue:
    cy,cx=queue.popleft()
    for i in range(4):
      ny = cy + dy[i]
      nx = cx + dx[i]
      if ny<0 or nx<0 or ny>=n or nx>=m: 
        continue
      if visited[ny][nx] == 0 and miro[ny][nx] == '1':
        visited[ny][nx] = visited[cy][cx] + 1
        queue.append((ny,nx))

bfs(0,0)
print(visited[n-1][m-1])
        
  