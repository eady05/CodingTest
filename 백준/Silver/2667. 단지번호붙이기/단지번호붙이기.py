import sys
input = sys.stdin.readline
n = int(input())
map = [input().strip() for _ in range(n)]
visited = [[False] * (n) for _ in range(n)]

dy = [1,0,-1,0]
dx = [0,1,0,-1]

cnt = 0
area = []

def dfs(y,x):
  global cnt
  visited[y][x] = True
  cnt+=1
  for i in range(4):
    ny = y+dy[i]
    nx = x+dx[i]
    if(nx<0 or ny<0 or nx>=n or ny>=n):
      continue
    if(not visited[ny][nx] and map[ny][nx] == '1'):
      dfs(ny,nx)
res = 0
for i in range(n):
  for j in range(n):
    if map[i][j]=='1' and not visited[i][j]:
      dfs(i,j)
      area.append(cnt)
      cnt = 0
      res += 1 

area.sort()
print(res)
for a in area:
  print(a)