import sys
input = sys.stdin.readline

n, m = map(int, input().split())
res = [] #m개의 숫자가 들어올 리스트

def select_num(k):
  if (len(res) == m):
    print(*res)
    return

  for i in range(k, n+1):
      res.append(i)
      
      select_num(i)
      
      res.pop()
    
select_num(1)
  