import sys
input = sys.stdin.readline
n = int(input())
v = int(input())
computer = [[] for _ in range(n+1)]
for _ in range(v):
  s,e = map(int,input().split())
  computer[s].append(e)
  computer[e].append(s)

visited = [False] * (n+1)
def dfs(c):
  visited[c] = True
  for cp in computer[c]:
    if not visited[cp]:
      dfs(cp)

dfs(1)
cnt = 0
for v in visited:
  if v:
    cnt+=1
print(cnt-1)