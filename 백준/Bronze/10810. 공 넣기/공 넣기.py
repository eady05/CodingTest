import sys 
input = sys.stdin.readline

#바구니 1-n
n,m=map(int, input().split())
b=[0]*(n+1)
for _ in range(m):
  s,e,num=map(int, input().split())
  for i in range(s,e+1):
    b[i] = num

for i in range(1,n+1):
  print(b[i])