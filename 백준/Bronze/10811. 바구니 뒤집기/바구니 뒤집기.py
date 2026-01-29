import sys 
input = sys.stdin.readline

n,m=map(int,input().split())
bas = list(range(105))
for _ in range(m):
  i,j=map(int,input().split())
  gap = (j-i+1)//2
  for g in range (gap):
    temp = bas[i+g]
    bas[i+g] = bas[j-g]
    bas[j-g] = temp

# 1번 바구니부터 n번 바구니까지만 공백으로 구분해 출력
for b in range(1, n + 1):
    print(bas[b], end=" ")