import sys
from collections import deque
input = sys.stdin.readline

n = int(input())
n_list = list(map(int, input().split()))

d = deque()
for i in range(n):
    d.append((i + 1, n_list[i]))

while True:
  idx, val = d.popleft()
  print(idx, end=' ')

  if(len(d)==0):
    break;

  if(val>0):
    d.rotate(-(val-1))
  else:
    d.rotate(-val)