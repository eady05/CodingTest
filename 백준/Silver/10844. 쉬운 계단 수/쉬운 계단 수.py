import sys
input = sys.stdin.readline

n = int(input())
# dp[길이][끝자리숫자]
dp = [[0] * 10 for _ in range(n + 1)]

# 길이가 1일 때 초기화 (0으로 시작하는 수는 없으므로 1~9만 1로 설정)
for i in range(1, 10):
    dp[1][i] = 1

# 길이가 2부터 n까지 채우기
for i in range(2, n + 1):
    for j in range(10):
        if j == 0:
            dp[i][j] = dp[i-1][1]
        elif j == 9:
            dp[i][j] = dp[i-1][8]
        else:
            dp[i][j] = dp[i-1][j-1] + dp[i-1][j+1]
    
    # 숫자가 커질 수 있으니 미리 나눠주는 센스!
    for j in range(10):
        dp[i][j] %= 1000000000

print(sum(dp[n]) % 1000000000)