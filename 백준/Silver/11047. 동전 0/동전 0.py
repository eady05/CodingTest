import sys

input = sys.stdin.readline

n,k=map(int,input().split())
money=[]

for _ in range(n):
  v=int(input())
  money.append(v)

money.sort(reverse=True)
res=k
cnt=0
for m in money:
  s = res // m
  cnt += s
  res = res%m
  if(res==0): break;

print(cnt)