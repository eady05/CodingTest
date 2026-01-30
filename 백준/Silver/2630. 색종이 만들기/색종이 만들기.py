import sys 

input = sys.stdin.readline

n = int(input())

paper = [list(map(int,input().split())) for _ in range(n)]
dict = {0:0,1:0}

def check(x, y, n):
  if n==0: return
  global dict
  color = paper[y][x]
  flag = False
  for i in range(y,y+n):
    for j in range(x, x+n):
      if(color != paper[i][j]):
        flag = True
        break 
    if flag:
      break

  if flag: #색이 다른 경우
    gap = n // 2
    for i in range(2):
      a = y + (gap*i)
      for j in range(2):
        b = x + (gap*j)
        check(b,a,gap)
        
  else: #색이 같은 경우
    dict[color] += 1

check(0,0,n)
print(dict[0])
print(dict[1])
    