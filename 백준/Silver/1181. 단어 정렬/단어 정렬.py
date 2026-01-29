import sys
input = sys.stdin.readline

n = int(input())
se = set()
for _ in range(n):
  s = input().strip()
  se.add(s)
se_list = list(se)
se_list.sort(key= lambda x : (len(x),x))
for s in se_list:
  print(s)