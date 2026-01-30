import sys
sys.setrecursionlimit(10**6)
input = sys.stdin.readline

n = int(input())
tri_list = [list(map(int,input().split())) for _ in range(n)]

  
# 밑에서 두 번째 줄(n-2)부터 꼭대기(0)까지 거꾸로 올라감
for i in range(n - 2, -1, -1):
    for j in range(len(tri_list[i])):
        # 내 아래 왼쪽(i+1, j)과 아래 오른쪽(i+1, j+1) 중 큰 값을 나랑 더함
        tri_list[i][j] += max(tri_list[i+1][j], tri_list[i+1][j+1])

print(tri_list[0][0])