import sys
input = sys.stdin.readline

n, m = map(int, input().split())
r, c, d = map(int, input().split())

# 방향 벡터 정의 (북, 동, 남, 서)
dr = [-1, 0, 1, 0]
dc = [0, 1, 0, -1]

room = [list(map(int, input().split())) for _ in range(n)]
visited = [[0] * m for _ in range(n)]

# 현재 위치 청소
visited[r][c] = 1
count = 1

while True:
    flag = False 
    
    for _ in range(4):
        # 1. 반시계 방향 90도 회전
        d = (d + 3) % 4
        nr = r + dr[d]
        nc = c + dc[d]
        
        # 2. 범위 내에 있고, 벽이 아니며, 청소하지 않은 공간인 경우
        if 0 <= nr < n and 0 <= nc < m and room[nr][nc] == 0:
            if visited[nr][nc] == 0:
                visited[nr][nc] = 1
                r, c = nr, nc
                count += 1
                flag = True
                break
    
    # 3. 4방향 모두 청소할 곳이 없는 경우
    if not flag:
        # 후진
        br = r - dr[d]
        bc = c - dc[d]
        
        # 후진할 곳이 벽이 아니면 이동 (청소 여부는 상관없음)
        if 0 <= br < n and 0 <= bc < m and room[br][bc] == 0:
            r, c = br, bc
        else:
            # 벽이라서 후진도 못하면 종료
            break

print(count)