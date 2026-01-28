import sys

input = sys.stdin.readline

n=int(input())
time=[]

for _ in range(n):
  s,e=map(int, input().split())
  time.append((s,e))

time.sort(key=lambda x : (x[1], x[0]))

cnt=0
end_t=0

for s,e in time:
  if(end_t<=s):
    cnt+=1
    end_t=e


print(cnt)