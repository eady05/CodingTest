import sys
from collections import deque
input = sys.stdin.readline

n = int(input())
n_list = list(map(int, input().split()))

d = deque()
for i in range(n):
    d.append((i + 1, n_list[i]))

while d:
    idx, k = d.popleft()
    print(idx, end=' ')
    
    # 풍선이 다 터졌으면 종료
    if not d:
        break
    
    # 3. 핵심: k가 양수면 왼쪽으로, 음수면 오른쪽으로 회전!
    if k > 0:
        d.rotate(-(k - 1))
    else:
        d.rotate(-k)