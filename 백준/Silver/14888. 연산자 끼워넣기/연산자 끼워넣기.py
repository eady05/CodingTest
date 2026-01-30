import sys
input = sys.stdin.readline

n = int(input())
nums = list(map(int, input().split()))
# 더하기, 빼기, 곱하기, 나누기 개수
plus, minus, mul, div = map(int, input().split())

max_val = -float('inf')
min_val = float('inf')

def solve(total, idx, p, m, mu, d):
    global max_val, min_val
    
    # 1. 종료 조건: 모든 숫자를 다 사용했을 때
    if idx == n:
        max_val = max(max_val, total)
        min_val = min(min_val, total)
        return

    # 2. 각 연산자별로 남은 개수가 있다면 재귀 호출
    if p > 0:
        solve(total + nums[idx], idx + 1, p - 1, m, mu, d)
    if m > 0:
        solve(total - nums[idx], idx + 1, p, m - 1, mu, d)
    if mu > 0:
        solve(total * nums[idx], idx + 1, p, m, mu - 1, d)
    if d > 0:
        # 파이썬에서 음수 나눗셈 주의 (문제 조건: 양수로 바꾼 뒤 몫을 취하고 다시 음수로)
        if total < 0:
            solve(-(-total // nums[idx]), idx + 1, p, m, mu, d - 1)
        else:
            solve(total // nums[idx], idx + 1, p, m, mu, d - 1)

# 첫 번째 숫자를 시작점으로 던져줍니다.
solve(nums[0], 1, plus, minus, mul, div)

print(max_val)
print(min_val)