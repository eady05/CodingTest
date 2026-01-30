import sys
from collections import deque
input = sys.stdin.readline
sys.setrecursionlimit(10**6) # 재귀 깊이 제한 늘리기

def draw_star(n):
    if n == 1:
        return ["*"]

    stars = draw_star(n // 3) # n/3 크기의 별을 먼저 가져옴
    result = []

    # 윗줄 (3번 반복)
    for s in stars:
        result.append(s * 3)
    # 중간줄 (별 - 공백 - 별)
    for s in stars:
        result.append(s + " " * (n // 3) + s)
    # 아랫줄 (3번 반복)
    for s in stars:
        result.append(s * 3)
    
    return result
n = int(input())
star_list = draw_star(n)
for sl in star_list:
    print(sl)