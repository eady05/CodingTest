import sys 
input = sys.stdin.readline

n = int(input())
cnt=0
for _ in range(n):
  s = input().strip()
  seen = set()
  prev = ""
  flag = True
  for c in s:
    if prev != c:
      if c in seen:
        flag = False
        break 
      else:
        seen.add(c)
        prev = c
  if flag:
    cnt+=1
print(cnt)