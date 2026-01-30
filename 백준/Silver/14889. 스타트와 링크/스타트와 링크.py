import sys
input = sys.stdin.readline

n = int(input())
grade = [list(map(int,input().split())) for _ in range(n)]
mn = float("inf")
visited = [False] * n

def solve(idx, count):
    global mn
    if count == (n // 2):
        start_score, link_score = 0, 0
        for i in range(n):
            for j in range(n):
                if visited[i] and visited[j]:
                    start_score += grade[i][j]
                elif not visited[i] and not visited[j]:
                    link_score += grade[i][j]
        
        gap = abs(start_score - link_score)
        mn = min(mn, gap)
        return

    for i in range(idx, n):
        if not visited[i]:
            visited[i] = True
            solve(i + 1, count + 1) 
            visited[i] = False
      
solve(0, 0)
print(mn)