import sys
input = sys.stdin.readline

n, r, c = map(int, input().split())

ans = 0

def solve(x, y, n):
    global ans
    if n == 1:
        return

    gap = n // 2
    
    if r < x + gap and c < y + gap:
        solve(x, y, gap)
    elif r < x + gap and c >= y + gap:
        ans += gap * gap
        solve(x, y + gap, gap)
    elif r >= x + gap and c < y + gap:
        ans += gap * gap * 2
        solve(x + gap, y, gap)
    else:
        ans += gap * gap * 3
        solve(x + gap, y + gap, gap)

solve(0, 0, 2**n)
print(ans)