import sys
from collections import deque
input = sys.stdin.readline
sys.setrecursionlimit(10**6) # 재귀 깊이 제한 늘리기


paper = []
cnt = {-1: 0, 0: 0, 1: 0}

def cnt_paper(x,y,n):
  global paper,cnt
  prev = paper[y][x]
  flag = False
  for i in range(y,y+n):
    for j in range(x,x+n):
      if(prev != paper[i][j]):
        flag = True
        break
    if(flag): 
        break
  if(flag):
    gap=n//3
    for i in range(3):
      a = y + (i*gap)
      for j in range(3):
        b = x + (j*gap)
        cnt_paper(b,a,gap)
  else:
    cnt[prev] += 1
    return 

  
n = int(input())
for _ in range(n):
  p = list(map(int, input().split()))
  paper.append(p)
cnt_paper(0, 0, n)
print(cnt[-1])
print(cnt[0])
print(cnt[1])