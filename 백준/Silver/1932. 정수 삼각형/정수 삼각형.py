import sys
sys.setrecursionlimit(10**6)
input = sys.stdin.readline

n = int(input())
tri_list = [list(map(int,input().split())) for _ in range(n)]

dp = []
for i in range(1,n+1):
  dp.append([0]*i)
  
# depth: 층(0부터 시작), idx: 해당 층에서의 번호
def sol(depth, idx):
# 기저 조건: 맨 꼭대기 층에 도달하면 그 값을 반환
    if depth == 0:
        return tri_list[0][0]
    
    # 메모이제이션
    if dp[depth][idx] != 0:
        return dp[depth][idx]

    # 왼쪽 위에서 오는 경우와 오른쪽 위에서 오는 경우 중 최댓값 선택
    # 단, 인덱스가 범위를 벗어나지 않게 처리해야 함 (양 끝 처리)
    if idx == 0: # 왼쪽 끝이면 무조건 오른쪽 위(실제로는 바로 위)에서만 옴
        dp[depth][idx] = sol(depth-1, idx) + tri_list[depth][idx]
    elif idx == depth: # 오른쪽 끝이면 무조건 왼쪽 위에서만 옴
        dp[depth][idx] = sol(depth-1, idx-1) + tri_list[depth][idx]
    else: # 중간에 끼어있으면 두 곳 중 큰 쪽 선택
        dp[depth][idx] = max(sol(depth-1, idx-1), sol(depth-1, idx)) + tri_list[depth][idx]
    
    return dp[depth][idx]
# 마지막 줄 수정 예시
results = []
for i in range(n):
    results.append(sol(n-1, i))

print(max(results))