import sys
from collections import deque
input = sys.stdin.readline

n,k = map(int,input().split())
d = deque(range(1,n+1))
print('<',end='')
while (len(d)):
  for i in range(k):
    dout = d.popleft()
    d.append(dout)
  if(len(d)==1):print(d.pop(),end='')
  else:print(str(d.pop())+',',end=' ')
print('>')