import sys
input = sys.stdin.readline

n, m = map(int, input().split())
res = [] #m개의 숫자가 들어올 리스트
visited = [False] * (n+1)

def select_num():
  if (len(res) == m):
    print(*res)
    return

  for i in range(1, n+1):
    if visited[i] == False:
      res.append(i)
      visited[i]=True
      
      select_num()
      
      res.pop()
      visited[i]=False
    
select_num()
  