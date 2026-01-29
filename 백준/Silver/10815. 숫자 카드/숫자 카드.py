import sys
input = sys.stdin.readline

n = int(input()) 
sang = set(map(int, input().split()))

m = int(input()) 
check = map(int, input().split())
ans = 0
for c in check:
  if c in sang:
    print(1, end=' ')
  else:
    print(0, end=' ')
