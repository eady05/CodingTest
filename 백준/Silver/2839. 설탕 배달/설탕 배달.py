import sys 
input = sys.stdin.readline

n = int(input())
cnt=1000000
f = n // 5
for i in range(f+1):
  m = n - (i*5)
  c = i
  if (m == 0):
    cnt=min(cnt,c)
  else:
    if(m%3==0):
      c = c + (m//3)
      cnt=min(cnt,c)
if(cnt==1000000): cnt = -1
print(cnt)
  
  