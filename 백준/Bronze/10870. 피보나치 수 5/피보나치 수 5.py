import sys
from collections import deque
input = sys.stdin.readline

fibo = [0,1]
n = int(input())
if(n>=2):
  for i in range(2,n+1):
    next = fibo[i-1] + fibo[i-2]
    fibo.append(next)

print(fibo[n])  