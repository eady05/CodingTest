import sys
from collections import deque
input = sys.stdin.readline

def hanoi(n,start, end, sub):
  if n == 1:
    print(f"{start} {end}") # 원판이 하나면 그냥 옮기면 끝!
    return

  hanoi(n-1,start, sub, end) # 보조기둥에 n-1개 옮기기
  print(f"{start} {end}") # n번째 원판 최종목적지에 옮기기
  hanoi(n - 1, sub, end, start) # 최종목적지에 n-1개 옮기기

n = int(input())
print(2**n - 1)

hanoi(n, 1, 3, 2)