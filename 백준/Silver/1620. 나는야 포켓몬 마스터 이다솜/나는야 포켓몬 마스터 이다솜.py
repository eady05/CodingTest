import sys
input = sys.stdin.readline

n,m = map(int, input().split())
na = dict()
nu = dict()
for i in range(1,n+1):
  s = input().strip()
  na[i] = s
  nu[s] = i
for _ in range(m):
  s = input().strip()
  if s.isdigit():
    print(na[int(s)])
  else:
    print(nu[s])

