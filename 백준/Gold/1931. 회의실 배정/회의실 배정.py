import sys 
from collections import deque
sys.setrecursionlimit(10**6)
input = sys.stdin.readline

n = int(input())
time = []
for _ in range(n):
  s,e = map(int, input().split())
  time.append((e,s))

time.sort()
prev = 0
cnt = 0
for t in time:
  if(prev<=t[1]):
    prev = t[0]
    cnt+=1

print(cnt)