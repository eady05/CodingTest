import sys 
input = sys.stdin.readline
cro = ['c=','c-','dz=','d-','lj','nj','s=','z=']
s = input().strip()
for ca in cro:
  s = s.replace(ca, "X")

print(len(s))