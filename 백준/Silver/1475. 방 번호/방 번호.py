import sys 

input = sys.stdin.readline

n=input().strip()

num_cnt=[0]*10

for c in n:
  num_cnt[int(c)]+=1

nine_six = num_cnt[9] + num_cnt[6]
num_cnt[6] = (nine_six + 1) // 2
num_cnt[9] = 0 # 9의 개수는 6에 합쳐졌으므로 0으로 설정

# 이제 각 숫자에 대해 필요한 세트의 개수 중 최댓값을 찾습니다.
# 6/9는 이미 num_cnt[6]에 올바르게 반영되어 있습니다.
max_sets = 0
for i in range(9):
    max_sets = max(max_sets, num_cnt[i])

print(max_sets)