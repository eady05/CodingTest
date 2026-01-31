import sys 
import heapq

input = sys.stdin.readline

n = int(input())
hq = []
for _ in range(n):
  arr = list(map(int,input().split()))
  for ar in arr:
    if len(hq) < n:
      heapq.heappush(hq,ar)
    else:
      if(ar>hq[0]):
        heapq.heappop(hq)
        heapq.heappush(hq,ar)

print(heapq.heappop(hq))