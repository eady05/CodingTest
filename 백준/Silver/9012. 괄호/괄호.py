import sys
input = sys.stdin.readline

t = int(input())

for _ in range(t):
  s = input().strip()
  n=0
  for c in s:
    if c=='(':
      n+=1
    else:
      n -=1
    if(n<0): 
      break;
  if n==0:
    print('YES')
  else:
    print('NO')
  